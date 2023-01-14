#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    double i,j;
    double S=0;
    for(i=1,j=1;i<=39;i+=2,j *= 2){
        S += i/j;
    }
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}
