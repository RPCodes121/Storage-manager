#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include "StorageDetector.h"

int check_files(Drive drives[], int drive_count)
{
    for (int i = 0; i < drive_count; i++)
    {
        ULARGE_INTEGER total_space = drives[i].total_space;
        ULARGE_INTEGER free_space = drives[i].free_space;
        }
}