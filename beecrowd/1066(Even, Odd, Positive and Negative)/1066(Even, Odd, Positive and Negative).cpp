#include <iostream>
using namespace std;
int main()
{
    int i, num[5],even=0,odd=0,positive=0,negative=0;

    for(i=0;i<5;i++){
        cin >> num[i];
        if(num[i] % 2 == 0 || num[i] == 0){
            even++;
           if(num[i] > 0 ){
            positive++;
            }
           else if(num[i] < 0 ){
            negative++;
           }

        }
        else if(num[i] % 2 != 0 ){
            odd++;
           if(num[i] > 0 ){
            positive++;
            }
           else if(num[i] < 0 ){
            negative++;
           }
        }
    }
    cout << even << " valor(es) par(es)" <<endl;
    cout << odd << " valor(es) impar(es)" <<endl;
    cout << positive << " valor(es) positivo(s)" <<endl;
    cout << negative << " valor(es) negativo(s)" <<endl;
    return 0;
}
