#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector <double>x;
    for(int i=0;i<100;i++){
        double a;
        cin>>a;
        x.push_back(a);
    }
    for( int j=0;j<100;j++){
        if(x[j]<=10){
              cout << "A[" << j << "] = " << fixed << setprecision(1) << x[j] << endl;
        }
    }

    return 0;
}
