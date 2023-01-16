#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector <int> x;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        x.push_back(a);
    }
    vector <int>:: iterator min_value =  min_element(x.begin(),x.end());
    int index = min_value - x.begin();
    cout << "Menor valor: " << *min_value << endl;
    cout << "Posicao: " << index  << endl;

    return 0;
}
