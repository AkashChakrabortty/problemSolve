#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector <int>x;
    for(int i=0;i<20;i++){
        int a;
        cin>>a;
        x.push_back(a);
    }
    reverse(x.begin(),x.end());
    for( int j=0;j<20;j++){
        cout << "N[" << j << "] = " << x[j] << endl;
    }
    return 0;
}
