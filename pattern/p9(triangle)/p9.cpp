#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin >> n;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
             if(row==1||row==n||col==1||col==row){
                  cout << "*" ;
             }
             else{
                  cout << " " ;
             }
        }
          cout << endl;
    }
    return 0;
}
