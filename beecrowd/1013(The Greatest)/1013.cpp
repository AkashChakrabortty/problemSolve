#include <iostream>
using namespace std;
int main()
{
   int a,b,s,maior;
   cin >> a >> b >> s;
   maior = a;
   if(b>maior){
        maior = b;
        if(s>maior){
            maior = s;
        }
        else{
            maior = b;
        }

   }
   else{
    if(s>maior){
        maior = s;
    }
    else{
         maior = a;
    }
   }
   cout << maior << " eh o maior"  << endl;

   return 0;
}
