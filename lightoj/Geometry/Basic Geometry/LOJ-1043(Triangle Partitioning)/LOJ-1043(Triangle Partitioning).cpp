#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double areaABC(double a,double b,double c){
    double s = (a+b+c)/2.0;
    double areaAbc = sqrt(s*(s-a)*(s-b)*(s-c));
    return areaAbc;
}
double areaADE(double areaAbc, double ratio){
    double areaAde = (areaAbc*ratio)/(ratio + 1);
    return areaAde;
}
double Ad(double areaAbc,double areaAde,double ab){
   double ad = sqrt(areaAde/areaAbc)*ab;
   return ad;
}
int main()
{
    int i = 0,T;
    cin >> T;
    while(i < T){
        double ab,ac,bc,ratio,areaAbc,areaAde,ad;
        cin >> ab >> ac >> bc >> ratio;
        areaAbc = areaABC(ab,ac,bc);
        areaAde = areaADE(areaAbc,ratio);
        ad = Ad(areaAbc,areaAde,ab);
        cout << "Case " << i+1 << ": " << fixed << setprecision(6) << ad << endl;
        i++;
    }
    return 0;
}
