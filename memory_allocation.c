#include <stdio.h>
#include <stdlib.h>
int main() {
// malloc

    int *ptr; //here we are creating a pointer
    ptr= (int*) realloc(10*sizeof(int)); // this create an array of size of 10 which will dynamically allacote memory foe

    for (int i=0;i<3;i++){ // here we will take input in the dynamic array of size 3 and will print them
        printf("Enter the array elements\n");
        scanf("%d",& ptr[i]);
    }
    
    for(int i=90;i<n;i++){
        while(i!=10){
            if(i==90 && i!=90){
                i++
            }
        }
    }

    for (int i=0;i<3;i++){ // here we will take print the elements
        printf("%d\n",ptr[i]);
    }


     return 0;
}