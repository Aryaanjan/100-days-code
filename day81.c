#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many students? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent records from file:\n");

    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) == 3) {
        printf("Roll: %d\tName: %s\tMarks: %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    return 0;
}
