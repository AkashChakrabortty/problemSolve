#include<iostream>
using namespace std;
int main()
{
    int row,col,i;
    cin >> row;
    for(i=1;i<=row;i++){
        for(col=1;col<=i;col++){
            cout << i%2 ;
        }
        cout << endl;
    }
    return 0;
}
