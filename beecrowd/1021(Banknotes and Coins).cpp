#include <iostream>
using namespace std;
int main()
{
    double N;
    int a,b;

    cin >> N;
    cout << "NOTAS:" << endl;

    a = 100;
    b = N / a;
    cout << b << " nota(s) de R$ 100.00" << endl;

    a = N - b*100;
    b = a / 50;
    cout << b << " nota(s) de R$ 50.00" << endl;

    a = a - b*50;
    b = a / 20;
    cout << b << " nota(s) de R$ 20.00" << endl;

    a = a - b*20;
    b = a / 10;
    cout << b << " nota(s) de R$ 10.00" << endl;

    a = a - b*10;
    b = a / 5;
    cout << b << " nota(s) de R$ 5.00" << endl;

    a = a - b*5;
    b = a / 2;
    cout << b << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    a = a - b*2;
    b = a / 1;
    cout << b << " moeda(s) de R$ 1.00" << endl;

    a = (N * 100) ;
    b = (a%100)/50;
    cout << b << " moeda(s) de R$ 0.50" << endl;

    a = a % 50;
    b = a /25;
    cout << b << " moeda(s) de R$ 0.25" << endl;

    a = a % 25;
    b = a /10;
    cout << b << " moeda(s) de R$ 0.10" << endl;

    a = a % 10;
    b = a /5;
    cout << b << " moeda(s) de R$ 0.05" << endl;

    a = a % 5;
    b = a /1;
    cout << b << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
