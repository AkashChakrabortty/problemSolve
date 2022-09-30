#include <iostream>
using namespace std;
int main()
{
    int n,alcohol=0,gasoline=0,diesel=0;

    while(1){
        cin >> n;
        if(n<1 || n>4){
            continue;
        }
        else if(n>=1 || n <=4){
            if(n==1){
                alcohol++;
            }
            else if(n==2){
                gasoline++;
            }
            else if(n==3){
                diesel++;
            }
            else{
                break;
            }
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel<< endl;
    return 0;
}
