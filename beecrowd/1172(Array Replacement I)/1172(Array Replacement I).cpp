#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector <int>x;
    for(int i=0;i<10;i++){
        int a;
        cin>>a;
        if(a<=0) a=1;
        x.push_back(a);
    }
    int j=0;
    for( auto value: x){
        cout << "X[" << j << "] = " << value << endl;
        j++;
    }

    return 0;
}
