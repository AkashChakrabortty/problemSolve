#include <iostream>
using namespace std;
int main()
{
    int arrayInput[3];
    //input 3 int
    for(int i = 0; i<3; i++){
        cin >> arrayInput[i];
    }

    int arrayMain[3];
    //copy array
    for(int i = 0; i<3; i++){
        arrayMain[i]=arrayInput[i];
    }
    int tmp;
    //ascending order
    for(int i = 0;i<2;i++){
        for(int j = 1; j<3;j++){
                if(arrayInput[i] > arrayInput[j] ){
                    tmp = arrayInput[i];
                    arrayInput[i] = arrayInput[j];
                    arrayInput[j] = tmp;

                }
        }
    }

    //show ascending array
    for(int i = 0; i<3; i++){
        cout << arrayInput[i] << endl;
    }
    cout << "\n";

    //show main array
    for(int i = 0; i<3; i++){
        cout << arrayMain[i] << endl;
    }

    return 0;
}
