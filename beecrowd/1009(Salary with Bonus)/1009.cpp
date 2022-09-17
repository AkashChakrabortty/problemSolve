#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    double fixedSalary,totalSale;
    cin >> name;
    cin >> fixedSalary;
    cin >> totalSale;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << fixedSalary +(totalSale*.15)<< endl;
    return 0;
}
