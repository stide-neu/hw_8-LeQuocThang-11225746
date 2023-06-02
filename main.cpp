/******************************************************************************
Copy đoạn code vào file này
**Lưu ý không đổi tên file hoặc định dạng file
**Nộp thành công sẽ có tích xanh ở ngoài repository
*******************************************************************************/
#include <stdio.h>

struct Student {
    char name[20];
    int eng;
    int math;
    int phys;
};

void acceptStudentInfo(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter English marks: ");
    scanf("%d", &(student->eng));
    printf("Enter Math marks: ");
    scanf("%d", &(student->math));
    printf("Enter Physics marks: ");
    scanf("%d", &(student->phys));
}

void showStudentInfo(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("English marks: %d\n", student->eng);
    printf("Math marks: %d\n", student->math);
    printf("Physics marks: %d\n", student->phys);
}

char calculateGrade(int eng, int math, int phys) {
    float mean = (eng + math + phys) / 3.0;

    if (mean >= 90 && mean <= 100) {
        return 'S';
    } else if (mean >= 80 && mean < 90) {
        return 'A';
    } else if (mean >= 70 && mean < 80) {
        return 'B';
    } else if (mean >= 60 && mean < 70) {
        return 'C';
    } else {
        return 'D';
    }
}

int main() {
    struct Student students[4];

    printf("Enter information for each student:\n");
    for (int i = 0; i < 4; i++) {
        printf("Student %d:\n", i + 1);
        acceptStudentInfo(&students[i]);
        printf("\n");
    }

    printf("Showing information of students:\n");
    for (int i = 0; i < 4; i++) {
        printf("Student %d:\n", i + 1);
        showStudentInfo(&students[i]);
        printf("Grade: %c\n\n", calculateGrade(students[i].eng, students[i].math, students[i].phys));
    }

    return 0;
}
