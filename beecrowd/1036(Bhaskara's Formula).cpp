#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double A,B,C,D,R1,R2;
    cin >> A >> B >> C;

    D = pow(B,2) - 4*A*C;

    if( D > 0 && A != 0 ) {
       R1= (-B + sqrt(D))/ (2*A);
       R2= (-B - sqrt(D))/ (2*A);
       cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
       cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
    else{
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}
