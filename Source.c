#include <stdio.h>

int main()
{
    FILE* pData = fopen("file.txt", "r");
    int counter = 1;

    while (!feof(pData)) {
        if (fgetc(pData) == '\n') {
            counter++;
        }
    }

    printf("there is %d rows in file", counter);
    fclose(pData);
    return 0;
}