#include <stdio.h>

int main() {
    int a=5;
    int *x= &a; // this will store tyhe address of a
    printf("%p\n",&a); // p prints address
    printf("%p\n",&x); //  prints address of the pointer adress variable
    printf("%c\n",&x++); //  prints address of the pointer adress variable
    printf("%d\n",&x); //  prints address of the pointer adress variable
    return 0;
}