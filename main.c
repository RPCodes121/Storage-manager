#include <stdio.h>
#include <stdlib.h>
#include "StorageDetector.h"

Drive drives[26];
int main()
{
    int count = get_drive_stats(drives, 26);
    return 0;
}
