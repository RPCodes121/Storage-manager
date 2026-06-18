#ifndef STORAGE_DETECTOR_H
#define STORAGE_DETECTOR_H
#include <stdint.h>
#include <windows.h>

typedef struct
{
    char name[4];
    ULARGE_INTEGER total_space;
    ULARGE_INTEGER used_space;
    ULARGE_INTEGER avail_space;
} Drive;

void get_drive_stats();

#endif