#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int X,Y,i,b;
    cin>>X>>Y;
    for(i=1,b=1;i<=Y;i++){
        if(b==X) {
             b=1;
             cout << i << endl;
        }
        else{
            b++;
            cout << i << " ";
        }
    }

    return 0;
}
