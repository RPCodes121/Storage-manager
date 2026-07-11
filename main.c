#include <stdio.h>
#include <stdlib.h>
#include "StorageDetector.h"
#include "FileDetector.h"
Drive drives[26];

int main()
{
    int count=get_drive_stats(drives, 26);
    check_files(drives,count);

    return 0;
}
