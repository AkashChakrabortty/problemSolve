#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int N,i;
    cin>>N;
    for(i=1;i<=N;i++){
      if(N%i==0) cout << i << endl;
    }

    return 0;
}
