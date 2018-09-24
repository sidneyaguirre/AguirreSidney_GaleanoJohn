#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "psinfo.h"


int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Error \n");
        return -1;
    }

    char *pid = argv[1];
    char command[201] = "/proc/";
    strcat(command, pid);
    strcat(command, "/status");
    logText(command);
    /* char *file = argv[1];
    logText(file);*/
    return 0;
}

