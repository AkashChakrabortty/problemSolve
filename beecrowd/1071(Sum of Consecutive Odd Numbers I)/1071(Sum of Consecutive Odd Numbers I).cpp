#include <iostream>
using namespace std;
int main()
{
    int X,Y,sum=0,i;
    cin >> X >> Y;

    if(X==Y){
         sum=0;
    }
    else if(X>Y){
            if(Y%2!=0){
                 for(i=Y+2;i<X; i=i+2){
                sum = sum + i;
                  }
            }
            else{
                for(i=Y+1;i<X; i=i+2){
                sum = sum + i;
                  }
            }

    }
    else if(X<Y){
            if(X%2!=0){
                 for(i=X+2;i<Y; i=i+2){
                sum = sum + i;
                  }
            }
            else{
                 for(i=X+1;i<Y; i+=2){
                sum = sum + i;
                }
            }

    }
     cout << sum <<endl;

    return 0;
}
