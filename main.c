#include <stdio.h>
#include <stdlib.h>
#include "StorageDetector.h"
#include "FileDetector.h"
Drive drives[26];

int main()
{
    //printf("Before scan\n");
    int count=get_drive_stats(drives, 26);
    //printf("After scan: %d\n", count);
    check_files(drives,count);
   // printf("done\n");

    return 0;
}
