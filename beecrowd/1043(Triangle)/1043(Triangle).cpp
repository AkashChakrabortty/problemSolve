#include<iostream>
#include<iomanip>
using namespace std;
int main(){

double a,b,c;
cin >> a >> b >> c;

if(a+b>c && b+c > a && a + c > b){
    double s = a + b +c;
    cout << "Perimetro = " << fixed << setprecision(1) << s <<endl;
}
else{
    double area;
    area = 0.5 * (a+b) * c;
    cout << "Area = " << fixed << setprecision(1) << area <<endl;
}

  return 0;
}
