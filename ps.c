#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main (int argc , char * argv[]){
    int proc_count = 0;
    int *a = (int *)malloc(sizeof(int));

    proc_count = atoi(argv[1]);
    for (int i = 0; i < proc_count; i++){
        if (fork() == 0){
            a = (int *)malloc((499400*(i+1)));
            for (int j = 0; j < 1000; j++){
                a[j] = j;
            }
            while(1);
        }
    }
    proc_dump();

    exit();
}