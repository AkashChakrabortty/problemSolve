#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int addition(int first,int next){
 return first + next;
}
int main()
{
    optimize();
    int n;
    cin >> n;
    int l=0,m=0,tmp=1;
    for(int i=1;i<=n;i++){
             if(i==2){
                m=1;
             }
             else if(i==4){
                l=1;
             }
             else if(i>5){
                l=m-l;
             }
             int s = addition(l,m);
             if(i==n){
                 cout << s ;
             }
             else{
                  cout << s << " ";
             }

             m=s;
    }
    cout << endl;
    return 0;
}
