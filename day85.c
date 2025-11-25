#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE = 11, TIMEOUT = 12 };

int main() {
    enum Status s1 = SUCCESS, s2 = FAILURE, s3 = TIMEOUT;

    printf("SUCCESS = %d\n", s1);
    printf("FAILURE = %d\n", s2);
    printf("TIMEOUT = %d\n", s3);

    return 0;
}
