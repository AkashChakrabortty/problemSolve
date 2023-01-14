#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define  optimize() ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);
int main()
{
    optimize();
    while(1){
        int X;
        cin>>X;
        if(X==0) break;
        else{
            for(int i=1;i<=X;i++){
            if(i==X) cout << i << endl
            else cout << i << " ";
            }
        }
    }

    return 0;
}
