#include<bits/stdc++.h>
using namespace std;
int main(){
  unsigned int T,j=1;
  cin>>T;
  while(j<=T){
    unsigned int n;
    cin >> n;
    if(n==2) cout << "Case " << j << ": " << "2" << endl;
    else if(n==3) cout << "Case " << j << ": " << "6" << endl;

    else{
        vector <unsigned int> primeNumber={2,3};
        //prime number find
        bool isPrime = true;
        for(int i=4;i<=n;i++){
            for(int j=2;j<i/2;j++){
                if(i%j==0) isPrime = false;
            }
            if(isPrime) primeNumber.push_back(i);
        }


         for(unsigned int r:primeNumber) cout<< r <<" ";
       cout << endl;

        //find power
        for(int u: primeNumber){
             if(u < ceil(sqrt(n))){
                for(unsigned int k=1;;k++){
                    unsigned int w = pow(u,k);
                    if(w<=n) {

                        primeNumber.push_back(u);
                    }
                     else {
                        primeNumber.pop_back();
                        break;
                     }
                }
            }
             else break;
        }

       for(unsigned int r:primeNumber) cout<< r <<" ";
       cout << endl;

        //find result
        unsigned int result=1;
        for(unsigned int m: primeNumber){
            result = m*result;
        }
       cout << "Case " << j << ": " << result << endl;
    }
   j++;
  }
  return 0;
}
