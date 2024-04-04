#include <stdio.h>

struct MyStruct {
    int x;
    int y;
    char z;
};

union MyUnion {
    int a;
    int b;
    char c;
};

int main() {
    struct MyStruct mystruct;
    union MyUnion myunion;

    printf("Size of struct MyStruct: %lu bytes\n", sizeof(struct MyStruct));
    printf("Size of union MyUnion: %lu bytes\n", sizeof(union MyUnion));

    return 0;
}