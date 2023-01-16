#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector< vector<double> > x;
    int L;
    cin>>L;
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
    double sum = accumulate(x[L].begin(),x[L].end(),0);
    if(T=="S")
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
        double avg = sum/x[L].size();
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
