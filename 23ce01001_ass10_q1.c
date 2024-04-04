#include <stdio.h>
union Data {
    int integer;
    float floating;
    char character;
};

int main() {
    union Data data;

    data.integer = 10;
    printf("Integer value: %d\n", data.integer);

    data.floating = 3.14;
    printf("Float value: %.2f\n", data.floating);

    data.character = 'A';
    printf("Character value: %c\n", data.character);

    printf("Integer value: %d\n", data.integer); // This may not give the expected result
    printf("Float value: %.2f\n", data.floating); // This may not give the expected result
    printf("Character value: %c\n", data.character);

    return 0;
}