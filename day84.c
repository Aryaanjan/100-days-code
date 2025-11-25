#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status s;

    s = SUCCESS;   // change to FAILURE or TIMEOUT to test

    if (s == SUCCESS)
        printf("Operation completed successfully.\n");
    else if (s == FAILURE)
        printf("Operation failed.\n");
    else if (s == TIMEOUT)
        printf("Operation timed out.\n");

    return 0;
}
