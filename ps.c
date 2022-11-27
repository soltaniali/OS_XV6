#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main (int argc , char * argv[]){
    int pid1 = fork();
    int pid2 = fork();

    if(pid1 == 0){
        int *mem = (int *) malloc(57000);
        mem[0] = 1;
        while(1);
    }
    if(pid2 == 0){
        int *mem = (int *) malloc(80000);
        for(int i = 0; i < 1000; i++){
            mem[i] = i;
        }
        while(1);
    }

    proc_dump();

    exit();
}