#include <iostream>
using namespace std;

int main(){
    
   int A[100];
   for (int i=0; i<9; i++){
        cin >> A[i];
   }
    int B=A[0];
    int S=0;
      for (int i=0; i<9; i++){
        if (B<A[i]){
            B=A[i];
            S=i;
        }
   }
    cout << B << endl;
    cout << S+1 << endl;
}