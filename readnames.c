#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char name[50];
    int marks;
    int i;

    // Open the file in write mode
    file = fopen("C:\\Users\\HomePC\\Documents\\School Projects\\loop.c.txt", "ra");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Input data for 5 students and write it to the file
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        // Write name and marks to the file
        fprintf(file, "Name: %s, Marks: %d\n", name, marks);
    }

    // Close the file after all data is written
    fclose(file);

    printf("Data successfully written to loop.c.txt\n");

    return 0; // Execution successful
}
