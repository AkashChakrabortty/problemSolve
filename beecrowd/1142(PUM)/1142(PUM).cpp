#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin >> n;

    for(i=1;i<=n*4;i+=4){
        for(j=i+1,k=i+2;;j++){
              cout << i << " " << j << " " << k << " PUM" <<endl;
              break;
        }
   }
    return 0;
}
