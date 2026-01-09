#include <stdio.h>

union ID {
    int rollNo;
    long aadhaar;
    char passport[10];
};

struct Student {
    char name[30];
    int idType;
    union ID id;
};

int main() {
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("\nSelect ID Type:\n");
    printf("1. Roll Number\n");
    printf("2. Aadhaar Number\n");
    printf("3. Passport Number\n");
    printf("Enter choice: ");
    scanf("%d", &s.idType);

    switch (s.idType) {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s.id.rollNo);
            break;

        case 2:
            printf("Enter Aadhaar Number: ");
            scanf("%ld", &s.id.aadhaar);
            break;

        case 3:
            printf("Enter Passport Number: ");
            scanf("%s", s.id.passport);
            break;

        default:
            printf("Invalid choice!");
            return 0;
    }

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);

    if (s.idType == 1)
        printf("Roll No: %d\n", s.id.rollNo);
    else if (s.idType == 2)
        printf("Aadhaar No: %ld\n", s.id.aadhaar);
    else
        printf("Passport No: %s\n", s.id.passport);

    printf("\nMemory used by union ID: %lu bytes\n", sizeof(union ID));

    return 0;
}
