#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r1 = ADMIN;
    enum Role r2 = USER;
    enum Role r3 = GUEST;

    printf("ADMIN stored as = %d\n", r1);
    printf("USER stored as  = %d\n", r2);
    printf("GUEST stored as = %d\n", r3);

    return 0;
}

