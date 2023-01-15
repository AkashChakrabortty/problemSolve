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
        int a,i;
        bool isPrime=true;
        cin >> a;
        for(i=2;i<a;i++){
      if(a%i==0)
      {
         isPrime = false;
      }
    }
    if(isPrime){
         cout << a << " eh primo" << endl;
    }
    else{
         cout << a << " nao eh primo" << endl;
    }
        j++;
    }


    return 0;
}
