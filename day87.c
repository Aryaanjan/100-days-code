#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r;

    printf("Select role:\n");
    printf("1. Admin\n2. User\n3. Guest\n");
    printf("Enter your choice: ");
    scanf("%d", (int*)&r);

    if (r == ADMIN)
        printf("Welcome, Admin! You have full access.\n");
    else if (r == USER)
        printf("Welcome, User! You have limited access.\n");
    else if (r == GUEST)
        printf("Welcome, Guest! You have view-only access.\n");
    else
        printf("Invalid role selected.\n");

    return 0;
}
