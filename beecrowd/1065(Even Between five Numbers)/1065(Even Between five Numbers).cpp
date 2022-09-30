#include <iostream>
using namespace std;
int main()
{
    int i, num[5],count=0;

    for(i=0;i<5;i++){
        cin >> num[i];
        if(num[i] % 2 == 0){
            count++;

        }
    }
    cout << count << " valores pares" <<endl;
    return 0;
}
