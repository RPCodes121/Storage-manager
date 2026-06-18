#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <windows.h>
#include "StorageDetector.h"

Drive drives[26];
int drive_count = 0;

void get_drive_stats() // checks bitmask for drives and fills the drive struct
{
    DWORD driveMask = GetLogicalDrives(); // checks OS for drives and returns the bitmask
    for (size_t i = 0; i < 26; i++)
    {
        DWORD set = driveMask & (1UL << i); // checks whether and operation between driveMask and shift mask is non-zero
        if (set)
        {
            char drive_letter = 'A' + i; // converts bit position into drive letter
            snprintf(drives[i].name, sizeof(drives[i].name), "%c:\\", drive_letter);
            printf("%s\n", drives[i].name);
            drive_count++;
        }
    }
}