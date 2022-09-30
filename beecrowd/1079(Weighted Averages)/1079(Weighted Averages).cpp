#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i = 1;
    double a,b,c,avg;
    cin >> n;

    while(i <= n){
        cin >> a >> b >> c;
        avg = (a*2 + b*3 + c*5)/10.0;
        cout << fixed << setprecision(1) << avg << endl;
        i++;
    }

    return 0;
}
