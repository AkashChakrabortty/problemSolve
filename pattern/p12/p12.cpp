#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin >> n;
    for(row=1;row<=n;row++){
        //space print
        for(col=1;col<=n-row;col++){
          cout << " " ;
        }
        //value print
        for(col=1;col<=row;col++){
          cout << col ;
        }
        //right half value print
          for(col=row-1;col>=1;col--){
          cout << col ;
          }
          cout << endl;
    }
    return 0;
}
