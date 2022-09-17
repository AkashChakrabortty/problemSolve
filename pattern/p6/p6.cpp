#include<iostream>
using namespace std;
int main()
{
    int row,col,i;
    cin >> row;
    for(i=1;i<=row;i++){
        for(col=1;col<=i;col++){
            cout << col ;
        }
        cout << endl;
    }
    for(i=row-1;i>=1;i--){
        for(col=1;col<=i;col++){
            cout << col ;
        }
        cout << endl;
    }
    return 0;
}
