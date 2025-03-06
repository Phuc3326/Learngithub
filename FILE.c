#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Declare a pointer FILE datatype
    FILE *fptr;

    // Create and open a file
    fptr = fopen("thong_tin_hoc_sinh.txt", "w");
    if (fptr == NULL)
    {
        printf("Error cannot open file!");
        exit(1);
    }

    // Prompt input
    printf("nhap vao ten: ");
    char name [50];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("nhap vao tuoi: ");
    int age;
    scanf("%d", &age);
    getchar();

    printf("nhap vao ten truong: ");
    char school [50];
    fgets(school, sizeof(school), stdin);
    school[strcspn(school, "\n")] = '\0';

    // Write into file
    fprintf(fptr, "%s\n%d\n%s", name, age, school);

    // Close file
    fclose(fptr);

    return 0;
}