#include<iostream>
#include<cmath>
using namespace std;
void sideEqual(double a, double b,double c){
    if( a == b && b== c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if( a == b || b == c || c == a ){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}
int main()
{
    double A,B,C,X;
    cin >> A >> B >> C;

    if( B > A && B > C ){
        X = A;
        A = B;
        B = X;
    }
    else if ( C > A && C > B ){
        X = A;
        A = C;
        C = X;
    }
    else if ( A > B && A > C ){
        A = A;
        B = B;
        C = C;
    }

    if ( A >= (B + C) ){
        cout << "NAO FORMA TRIANGULO" << endl;
        sideEqual(A,B,C);
    }
    else if( pow(A,2) == pow(B,2) + pow(C,2) ){
        cout << "TRIANGULO RETANGULO" << endl;
        sideEqual(A,B,C);
    }
    else if( pow(A,2) > pow(B,2) + pow(C,2) ){
        cout << "TRIANGULO OBTUSANGULO" << endl;
        sideEqual(A,B,C);
    }
    else if( pow(A,2) < pow(B,2) + pow(C,2) ){
        cout << "TRIANGULO ACUTANGULO" << endl;
        sideEqual(A,B,C);
    }

    return 0;
}
