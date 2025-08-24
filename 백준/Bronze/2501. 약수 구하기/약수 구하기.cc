#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    
    vector<int> div;
    
    for(int i=1; i<=N; i++){
       if (N%i==0){
           div.push_back(i);
       }}
    
    if((int)div.size()>=K){
        cout << div[K-1] <<"\n";
    }else{
         cout << 0 << endl;
    }
    return 0;
    }
