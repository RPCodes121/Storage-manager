#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include "StorageDetector.h"
#define STORAGE_THRESHOLD 95ULL

void check_files(Drive drives[], int drive_count)
{
    for (int i = 0; i < drive_count; i++)
    {
        ULARGE_INTEGER total_space = drives[i].total_space;
        ULARGE_INTEGER occupied_space = drives[i].occupied_space;
        unsigned long long usage=(occupied_space.QuadPart*100ULL)/total_space.QuadPart;
        if(usage>STORAGE_THRESHOLD){
            printf("drive almost full");
        }
        else{
            printf("space available");
        }


        
    }
    
}