#include <stdio.h>
#include <string.h>
#include "student.h"

#define MAX_STUDENTS 100

/* Simple in-memory storage */
Student students[MAX_STUDENTS];
int studentCount = 0;

/* Compute total, percentage (average) and grade */
void calculateResult(Student *s) {
    s->total = 0.0f;
    for (int i = 0; i < MAX_SUBJECTS; ++i) {
        s->total += s->marks[i];
    }
    s->percentage = s->total / MAX_SUBJECTS; /* assume each subject is out of 100 */

    if (s->percentage >= 85.0f) s->grade = 'A';
    else if (s->percentage >= 70.0f) s->grade = 'B';
    else if (s->percentage >= 50.0f) s->grade = 'C';
    else if (s->percentage >= 35.0f) s->grade = 'D';
    else s->grade = 'F';
}

/* Read a line and remove trailing newline */
static void readLine(char *buf, int size) {
    if (fgets(buf, size, stdin) == NULL) {
        buf[0] = '\0'; /* on EOF or error, make it empty */
        return;
    }
    size_t len = strlen(buf);
    if (len > 0 && buf[len-1] == '\n') buf[len-1] = '\0';
}

/* Add one student (simple, with small checks) */
void addStudent(void) {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students (limit %d).\n", MAX_STUDENTS);
        return;
    }

    Student s;
    char buf[64];

    /* Roll */
    printf("Enter Roll Number: ");
    readLine(buf, sizeof(buf));
    if (sscanf(buf, "%d", &s.roll) != 1) {
        printf("Invalid roll. Aborting.\n");
        return;
    }

    /* Name */
    printf("Enter Name: ");
    readLine(s.name, NAME_LEN);
    if (s.name[0] == '\0') {
        strcpy(s.name, "Unknown");
    }

    /* Marks loop with validation */
    for (int i = 0; i < MAX_SUBJECTS; ++i) {
        float m = -1.0f;
        while (1) {
            printf("Marks for subject %d (0-100): ", i + 1);
            readLine(buf, sizeof(buf));
            if (sscanf(buf, "%f", &m) == 1 && m >= 0.0f && m <= 100.0f) {
                s.marks[i] = m;
                break; /* valid -> next subject */
            }
            /* invalid -> show message and repeat loop for same subject */
            printf("Invalid marks. Enter a number between 0 and 100.\n");
        }
    }

    calculateResult(&s);
    students[studentCount++] = s;
    printf("Student added. Total students: %d\n", studentCount);
}

/* Print all students */
void displayStudents(void) {
    if (studentCount == 0) {
        printf("No students available.\n");
        return;
    }

    for (int i = 0; i < studentCount; ++i) {
        Student *s = &students[i];
        printf("Roll:%d Name:%s Marks:", s->roll, s->name);
        for (int j = 0; j < MAX_SUBJECTS; ++j) {
            printf(" %.0f", s->marks[j]);
            if (j < MAX_SUBJECTS - 1) printf(",");
        }
        printf(" | Total:%.2f | %%:%.2f | Grade:%c\n",
               s->total, s->percentage, s->grade);
    }
}
