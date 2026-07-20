#include <stdio.h>

int main() {
    int n,key;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elemnts\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    printf("Enter key");
    scanf("%d",&key);

    int found = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Key found at %d \n",i);
            found=1;
            break;
        }
    }

    if(!found){
        printf("key not found");
    }
    printf("\n");
    


    return 0;
}