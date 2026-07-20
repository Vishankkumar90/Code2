#include <stdio.h>

struct student { // user defined data type
    int id;
    int marks;
    char fav_char;
};

int main() {

    struct student harry , ravi, rohit;

    harry.id=2; // we can assign values using dot on each variable
    ravi.id=7;
    rohit.id=9;

    harry.marks=96;
    ravi.marks=78;
    rohit.marks=82;

    harry.fav_char='a';
    ravi.fav_char='n';
    rohit.fav_char='s';
     
    printf("%d\n",harry.marks);
    printf("%d\n",harry.marks);
    printf("%c\n",harry.fav_char);

    printf("%d",ravi.marks);

    return 0;
}