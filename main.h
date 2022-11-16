#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/string.h>
#include <sys/type.h>

char *strtok(char *str, const char *delim);
pid_t fork(void);


#endif /*MAIN_H*/
