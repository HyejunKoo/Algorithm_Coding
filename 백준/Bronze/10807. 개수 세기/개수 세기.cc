#include <iostream>
using namespace std;

int main(){
    int N,v;
    cin >> N;
    
    int A[100];
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    cin >> v;
    int C=0;
    
    for(int i=0; i<N; i++){
         if (A[i]==v){
             C++;
         }
    }
        
    cout << C << endl;
    
    return 0;
    
}