#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector <int>x;

    int a,i,k;
    cin>>a;
    i=a;
    for(k=0;k<10;k++){
        x.push_back(i);
        i *= 2;
    }
    int j=0;
    for( auto value: x){
        cout << "N[" << j << "] = " << value << endl;
        j++;
    }

    return 0;
}
