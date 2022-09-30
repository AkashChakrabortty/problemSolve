#include<iostream>
using namespace std;
int main()
{
    double num[6];
    int i, count = 0;

    for(i=0;i<6;i++){
        cin >> num[i];
        if(num[i] > 0){
            count++;
        }
    }
    cout << count << " valores positivos" <<endl;

    return 0;
}
