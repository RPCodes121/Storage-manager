#include <stdio.h>
#include <stdint.h>
#include <windows.h>
#include <string.h>
#include "StorageDetector.h"
#define STORAGE_THRESHOLD 95ULL

void check_files(Drive drives[], int drive_count)
{
   // printf("drive_count = %d\n", drive_count);
    for (int i = 0; i < drive_count; i++)
    {
        ULARGE_INTEGER total_space = drives[i].total_space;
        ULARGE_INTEGER occupied_space = drives[i].occupied_space;
        unsigned long long usage=(occupied_space.QuadPart*100ULL)/total_space.QuadPart;
        int file_count=0;
        
        if(usage>STORAGE_THRESHOLD){
            
            
        }
        else{
            printf("space available in drive %s\n",drives[i].name);
        }


        
    }
    
}