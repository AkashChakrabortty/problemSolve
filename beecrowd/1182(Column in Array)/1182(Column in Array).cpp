#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector< vector<double> > x;
    int C;
    cin>>C;
    string T;
    cin>>T;
    for(int i=0;i<12;i++){
        vector <double> y;
        for(int j=0;j<12;j++){
        double a;
        cin>>a;
        y.push_back(a);
        }
     x.push_back(y);
    }

    double sum=0 ;
    for(int i=0;i<12;i++){
         for(int j=0;j<12;j++){
         if(j==C){
             sum += x[i][j] ;
            }
          }
    }

    if(T=="S")
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
        double avg = sum/12;
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
