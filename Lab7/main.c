
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "psinfo.h"


int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Error \n");
        return -1;
    }
    char *pid = argv[1];
    if(argc == 2){
        char command[201] = "/proc/";
        strcat(command, pid);
        strcat(command, "/status");
        logStatus(command);
    }
    //printf("%d", *(pid+1));
    if(argc > 2){
        int option = *(pid+1);
        switch(option){
            case 108:
                printf("-l");
            break;
            case 114:
                printf("-r");
            break;
            default:
                printf("%c %s",(char)option, "is not a valid option\n");
            break;
        }
    }

    return 0;
}