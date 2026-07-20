#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 0;
    }

     return n+fact(n-1);
    

}

int main() {
    int n=10;
    cout<<fact(3);
    return 0;
}