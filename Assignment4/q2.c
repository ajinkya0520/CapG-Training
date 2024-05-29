

/*
 * Author: Ajinkya Bothe
 * Program: : Define a structure to hold student information, including the student ID and a list of scores. Write a program that accepts multiple student records (student_ID and score) and prints the student ID and their highest average score. In case there are multiple records for the same student, the program should calculate the average of their scores. The program should print the student ID with the highest average score.
 * DOC: 28/05/2024
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct StudentInfo {
    char student_id[20];
    float score;
    int count;
};

int compare(const void *a, const void *b) {
    return ((((struct StudentInfo *)b)->score)/((struct StudentInfo *)b)->count) - ((((struct StudentInfo *)a)->score)/((struct StudentInfo *)a)->count);
}

int main() {
    struct StudentInfo students[100];
    int num_students = 0;

    // Accepting input
    printf("Enter student records (format: student_id-score):\n");
    char line[100];
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '\n')
            break;

        char student_id[20];
        float score;
        sscanf(line, "%19[^-]-%f", student_id, &score);

        int found = 0;
        for (int i = 0; i < num_students; i++) {
            if (strcmp(students[i].student_id, student_id) == 0) {
		students[i].score += score;
		students[i].count++;
               	found = 1;
               	break;
            }
        }

        if (!found) {
            strcpy(students[num_students].student_id, student_id);
            students[num_students].score = score;
	    students[num_students].count = 1;
            num_students++;
        }
    }

    qsort(students, num_students, sizeof(struct StudentInfo), compare);

    printf("\nStudent ID - Average Score\n");
    for (int i = 0; i < num_students; i++) {
        printf("%s - %f\n", students[i].student_id, students[i].score/students[i].count);
    }

    return 0;
}

