#include <iostream>
using namespace std;

int main(){
    int N;
    string A;
    int count=0;
    
    cin >> N;
    cin >> A;
    
        for(int i=0; i<N; i++){
            count += A[i]-'0';
    }
    cout << count << endl;
    
    return 0;
}