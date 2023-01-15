#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int N,j=0;
    cin>>N;
    while(j<N){
        int a,i,sum=0;
        cin >> a;
        for(i=1;i<a;i++){
      if(a%i==0)
      {
          sum += i;
      }
    }
    if(sum == a){
         cout << a << " eh perfeito" << endl;
    }
    else{
         cout << a << " nao eh perfeito" << endl;
    }
        j++;
    }


    return 0;
}
