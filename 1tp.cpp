#include <iostream>
using namespace std;

int main() {
    int arr[8]={2,7,4,8,5,74,65,-5};

    int low=0;

    for(int i=0;i<8;i++){
      swap(arr[i],arr[8-i-1]);
      i++;

    }

    for(int i=0;i<8;i++){
    cout<<arr[i]<<endl;
    }

    return 0;
}