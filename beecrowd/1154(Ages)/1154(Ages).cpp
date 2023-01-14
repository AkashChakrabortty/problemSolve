#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    double age,total=0,sum=0;

    while(1){
        cin>>age;
        if(age<0) break;
        else{
            total++;
            sum += age;
        }
    }
    double avg;
    avg = sum/total;
    cout << fixed << setprecision(2)  << avg << endl;

    return 0;
}
