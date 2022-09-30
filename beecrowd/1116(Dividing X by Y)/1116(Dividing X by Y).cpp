#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,i=0,a,b;
    double div;
    cin >> n;
    while(i<n){
        cin >> a >> b;
        if(b==0){
            cout << "divisao impossivel"<< endl;
        }
        else if(a==0){
            div = 0;
            cout << div<< endl;
        }
        else{
            div = a / (b*1.00);
            cout << fixed << setprecision(1)<<div<< endl;
        }
        i++;
    }

    return 0;
}
