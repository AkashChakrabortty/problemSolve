#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin >> n;

    for(i=1;i<=n;i++){
        for(j=i*i,k=i*j;j<=i*i+1;j++){
              cout << i << " " << j << " " << k <<endl;
              k++;
        }
   }
    return 0;
}
