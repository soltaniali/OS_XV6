#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main (int argc , char * argv[]){
    fork();
    fork();
    int *a = malloc(13000);
    int *b = malloc(33000);
    a[0] = 1;

    a = malloc(20000);

    a[1] = 4 * 5;
    b[2] = 4 * 5;
    proc_dump();

    exit();
}