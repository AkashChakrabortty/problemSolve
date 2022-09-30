#include<iostream>
using namespace std;
int main()
{
    int startTime, endTime;
    cin >> startTime >> endTime;

    if( startTime == endTime){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    else if( startTime > endTime ){
        cout << "O JOGO DUROU " << (endTime + 24) - startTime  << " HORA(S)" << endl;
    }
    else{
        cout << "O JOGO DUROU " << endTime - startTime  << " HORA(S)" << endl;
    }
    return 0;
}
