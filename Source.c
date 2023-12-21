#include <stdio.h>

int main()
{
    FILE* file = fopen("file.txt", "r");
    int counter = 1;

    while (!feof(file)) {
        if (fgetc(file) == '\n') {
            counter++;
        }
    }

    printf("there is %d rows in file", counter);
    fclose(file);

    return 0;
}