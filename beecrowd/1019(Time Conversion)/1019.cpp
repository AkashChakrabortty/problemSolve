#include <iostream>
using namespace std;
int main()
{
    int N,seconds,minutes,hours;
    cin >> N;

    hours = N / 3600;
    minutes = (N % 3600) / 60;
    seconds = (N % 3600) % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
