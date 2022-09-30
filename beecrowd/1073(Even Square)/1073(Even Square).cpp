#include <iostream>
using namespace std;
int main()
{
    int n,i = 2;
    cin >> n;

    while(i <= n){
        cout << i << "^2 = " << i*i << endl;
        i+=2;
    }

    return 0;
}
