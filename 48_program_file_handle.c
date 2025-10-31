/*WAP to count how many times program is executed & display a msg "This is execution number:" in the begining of program.*/

#include <stdio.h>

int main() {
    FILE *fp;
    int count = 0;

    fp = fopen("count.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &count);
        fclose(fp);
    }

    count++;

    printf("This is Execution Number: %d\n", count);

    fp = fopen("count.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(fp, "%d", count);
    fclose(fp);

    return 0;
}