#include <iostream>
using namespace std;
int main()
{
    int x,y,max,min,i,sum=0;
    cin >> x >> y;

    if(x<y){
        max=y;
        min=x;
    }
    else{
        max=x;
        min=y;
    }
    for(i=min;i<=max;i++){
        if(i%13 != 0){
                sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}
