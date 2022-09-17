#include <iostream>
using namespace std;
int main()
{
    int N,years,months,days;
    cin >> N;

    years = N / 365;
    months = (N % 365) / 30;
    days = (N % 365) % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}
