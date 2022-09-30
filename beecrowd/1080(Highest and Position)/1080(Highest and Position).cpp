#include <iostream>
using namespace std;
int main()
{
    int i=0,num[100],max,position;

    while(i < 100){
        cin >> num[i];
        i++;
    }
    max = num[0];
    for(i=0;i<100;i++){
        if(num[i]>max){
            max = num[i];
            position = i+1;
        }
    }
    cout << max <<endl;
    cout << position <<endl;
    return 0;
}
