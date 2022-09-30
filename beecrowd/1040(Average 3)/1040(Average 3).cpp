#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double N1,N2,N3,N4,average;
    cin >> N1 >> N2 >> N3 >> N4;

    average = (N1*2 + N2*3 + N3*4 + N4*1)/10;
    cout << "Media: " << fixed << setprecision(1) << average << endl;

    if(average > 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(average < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    else {
        cout << "Aluno em exame." << endl;
        double score;
        cin >> score;
        cout << "Nota do exame: " << score << endl;
        average = (average + score) / 2;

        if(average >= 5){
           cout << "Aluno aprovado." << endl;
        }
        else if(average <= 4.9){
           cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << average << endl;
    }

    return 0;
}
