#include <stdio.h>
#include <string.h>

struct Department
{
    char deptCode[10];
    char deptName[50];
};

struct Course
{
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void searchByDept(struct Course c[], int n, char code[])
{
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(c[i].dept.deptCode, code) == 0)
        {
            printf("\nCourse Code: %s\n", c[i].courseCode);
            printf("Course Name: %s\n", c[i].courseName);
            printf("Credit Hours: %d\n", c[i].creditHours);
            printf("Department Code: %s\n", c[i].dept.deptCode);
            printf("Department Name: %s\n", c[i].dept.deptName);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("No courses found for this department\n");
    }
}

int main()
{
    struct Course c[3];
    char code[10];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter data for course %d\n", i + 1);

        printf("Enter course code: ");
        scanf("%s", c[i].courseCode);

        printf("Enter course name: ");
        getchar();
        fgets(c[i].courseName, 60, stdin);
        c[i].courseName[strcspn(c[i].courseName, "\n")] = '\0';

        printf("Enter credit hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Enter department code: ");
        scanf("%s", c[i].dept.deptCode);

        printf("Enter department name: ");
        getchar();
        fgets(c[i].dept.deptName, 50, stdin);
        c[i].dept.deptName[strcspn(c[i].dept.deptName, "\n")] = '\0';
    }

    printf("\nAll Courses:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nCourse %d\n", i + 1);
        printf("Course Code: %s\n", c[i].courseCode);
        printf("Course Name: %s\n", c[i].courseName);
        printf("Credit Hours: %d\n", c[i].creditHours);
        printf("Department Code: %s\n", c[i].dept.deptCode);
        printf("Department Name: %s\n", c[i].dept.deptName);
    }

    printf("\nEnter department code to search: ");
    scanf("%s", code);

    searchByDept(c, 3, code);

    return 0;
}