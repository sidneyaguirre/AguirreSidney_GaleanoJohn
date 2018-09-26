
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "psinfo.h"

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
            printf("-- Información recolectada!!!\n");
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
    return 0;
}