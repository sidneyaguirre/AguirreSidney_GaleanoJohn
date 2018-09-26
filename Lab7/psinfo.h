#ifndef PSINFO_H_
#define PSINFO_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

<<<<<<< HEAD
extern char *pid;
extern char pids[201];
void getStatus(char *p);
void getReport(char *p);
void logStatus(char *file);
/* void cleanUp(struct pStat *); */

struct pStat
{
    char *pid;
    char *name;
    char *state;
    char *totalMemory;
    char *data;
    char *stk;
    char *exe;
    char *voluntarySw;
    char *nonVoluntarySw;
}status;
=======
void logStatus(char *file);
>>>>>>> 58ed317b19631b6537377b449bfe2f4c0e442030

#endif