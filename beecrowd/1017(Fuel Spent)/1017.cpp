#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int hours,speed;
    cin >> hours >> speed;
    cout << fixed << setprecision(3) << (hours * speed) /12.00 << endl;
    return 0;
}
