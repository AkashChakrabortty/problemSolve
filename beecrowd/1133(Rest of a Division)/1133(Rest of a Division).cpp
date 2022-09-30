#include <iostream>
using namespace std;
int main()
{
    int x,y,max,min,i;
    cin >> x >> y;

    if(x<y){
        max=y;
        min=x;
    }
    else{
        max=x;
        min=y;
    }
    for(i=min+1;i<max;i++){
        if(i%5 == 2 || i%5 == 3){
            cout << i << endl;
        }
    }

    return 0;
}
