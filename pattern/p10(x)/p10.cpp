#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin >> n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
             if(row==col|| row+col==n+1){
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
