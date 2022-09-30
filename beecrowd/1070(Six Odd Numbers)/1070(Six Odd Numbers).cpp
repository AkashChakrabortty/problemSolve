#include <iostream>
using namespace std;
int main() {
    int i,X;
    cin >> X;
    if(X%2==0){
        for(i=X+1; i<X+2*6; i=i+2){
        cout << i <<endl;
        }
    }
    else{
        for(i=X;i <X+11; i+=2){
        cout << i <<endl;
        }
    }

    return 0;
}
