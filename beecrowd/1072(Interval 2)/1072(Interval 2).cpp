#include <iostream>
using namespace std;
int main()
{
    int x,n,i = 0,in=0,out=0;
    cin >> n;

    while(i < n){
            cin >> x;
            if (x>=10 && x <=20){
                in++;
            }
            else{
                out++;
            }
            i++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}
