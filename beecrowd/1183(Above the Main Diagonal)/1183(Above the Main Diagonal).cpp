#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector< vector<double>  > M;
    string O;
    cin>>O;
    for(int i=0;i<12;i++){
        vector<double>y;
        for(int j=0;j<12;j++){
            double a;
            cin>> a;
            y.push_back(a);
        }
        M.push_back(y);
    }

    double sum = 0;
    double totalNumber = 0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(j>i){
                  sum += M[i][j] ;
                  totalNumber++;
            }
        }
    }
    double avg = sum/totalNumber;

     if(O=="S")
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
        cout << fixed << setprecision(1) << avg << endl;
    }
    return 0;
}
