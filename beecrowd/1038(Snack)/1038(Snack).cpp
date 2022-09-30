#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int X,Y;
    double totalPrice;
    cin >> X >> Y;
    double price[] = {4.00 , 4.50 , 5.00 , 2.00 , 1.50};

    switch(X){
    case 1:
        totalPrice = price[0] * Y;
        break;
    case 2:
        totalPrice = price[1] * Y;
        break;
    case 3:
        totalPrice = price[2] * Y;
        break;
    case 4:
        totalPrice = price[3] * Y;
        break;
    case 5:
        totalPrice = price[4] * Y;
        break;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
