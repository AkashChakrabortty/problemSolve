#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int code[2],unit[2];
   double price[2];
   cin >> code[0] >> unit[0] >> price[0];
   cin >> code[1] >> unit[1] >> price[1];
   cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << unit[0] * price[0] + unit[1] * price[1] << endl;
   return 0;
}
