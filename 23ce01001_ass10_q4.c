#include <stdio.h>

union Arrays {
    int intArr[10];
    float floatArr[10];
    char charArr[10];
};

int main() {
    union Arrays myUnion;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &myUnion.intArr[i]);
    }

    printf("\nArray of Integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", myUnion.intArr[i]);
    }
    printf("\n\n");

    printf("Enter 10 floats:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &myUnion.floatArr[i]);
    }

    printf("\nArray of Floats:\n");
    for (int i = 0; i < 10; i++) {
        printf("%0.2f ", myUnion.floatArr[i]);
    }
    printf("\n\n");

    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &myUnion.charArr[i]);
    }

    printf("\nArray of Characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", myUnion.charArr[i]);
    }
    printf("\n");
    printf("\nArray of Integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", myUnion.intArr[i]);
    }

    return 0;
}
