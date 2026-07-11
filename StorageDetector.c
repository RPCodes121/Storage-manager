#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <windows.h>
#include "StorageDetector.h"

int get_drive_stats(Drive drives[], int max_drives) // checks bitmask for drives and fills the drive struct
{
    int drive_count = 0;
    ULARGE_INTEGER total_space;
    ULARGE_INTEGER free_space;

    DWORD driveMask = GetLogicalDrives(); // checks OS for drives and returns the bitmask
    for (int i = 0; i < max_drives; i++)
    {
        DWORD set = driveMask & (1UL << i); // checks whether and operation between driveMask and shift mask is non-zero
        if (set)
        {
            char drive_letter = 'A' + i; // converts bit position into drive letter
            snprintf(drives[i].name, sizeof(drives[i].name), "%c:\\", drive_letter);
            GetDiskFreeSpaceEx(drives[i].name, &free_space, &total_space, NULL);
            drives[i].total_space = total_space;
            drives[i].free_space = free_space;
            drives[i].occupied_space.QuadPart = total_space.QuadPart - free_space.QuadPart;
            drive_count++;
        }
    }
    return drive_count;
}