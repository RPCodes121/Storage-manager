#ifndef FILE_STRUCT_H
#define FILE_STRUCT_H
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char filename[100];
    unsigned long long size;

} File;
#endif