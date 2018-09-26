
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "psinfo.h"

<<<<<<< HEAD
char *pid;
char pids[201];
int k,l;
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Error \n");
        return -1;
    }
    pid = argv[1];
    if (argc == 2)
    {
        getStatus(pid);
    }
    if (argc > 2)
    {
        int option = *(pid + 1);
        switch (option)
        {
        case 108:
            k = 2;
            while (k < argc)
            {
                char *ar = argv[k];
                pid = argv[k];
                getStatus(ar);
                k++;
            }
            break;
        case 114:
            k = 2;
            while (k < argc)
            {
                pid = argv[k];
                strcat(pids, pid);
                strcat(pids, " ");
                k++;
            }
            l = 2;
            while (l < argc)
            {
                char *ad = argv[l];
                pid = argv[l];
                getReport(ad);
                l++;
            }
            printf("Archivo de salida generado: psinfo-report- %s\n",pids);
            break;
        default:
            printf("option not found\n");
            break;
        }
    }
=======

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

>>>>>>> 58ed317b19631b6537377b449bfe2f4c0e442030
    return 0;
}