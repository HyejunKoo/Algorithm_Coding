#include <iostream>
using namespace std;

int main(){
    int N;
    
    cin >> N;
    int A[1000000];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    int S=A[0];
    int B=A[0];

    for(int i=0; i<N; i++){
        if(A[i]<S){
            S=A[i];
        }
    }
    for(int i=0; i<N; i++){
        if(A[i]>B){
            B=A[i];
        }  
    }
        cout << S << " " << B << endl;

}