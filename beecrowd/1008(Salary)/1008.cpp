#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num,hours;
    double amountPerHour;
    cin >> num;
    cin >> hours;
    cin >> amountPerHour;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << hours * amountPerHour << endl;
    return 0;
}
