#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    int fac=n;
    while(n--){
        if(n==0) break;
        fac *= n;
    }
    cout << fac << endl;

    return 0;
}
