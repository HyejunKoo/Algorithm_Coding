#include <iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    string S[10];

    for (int i=0; i<T; i++){
       cin >> S[i];        
    }
    for (int i=0; i<T; i++){
       cout << S[i][0] << S[i][S[i].length()-1] <<endl ;
    }
    
    return 0;
}