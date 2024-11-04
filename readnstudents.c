#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char name[50];
    int marks, n, i;

    // Open the file in append mode
    file = fopen("C:\\Users\\HomePC\\Documents\\School Projects\\overduelibrarybooks\\file.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input data for each student and write to the file
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        // Write name and marks to the file
        fprintf(file, "Name: %s, Marks: %d\n", name, marks);
    }

    // Close the file after writing all data
    fclose(file);

    printf("Data successfully appended to file.txt\n");

    return 0; // Execution successful
}
