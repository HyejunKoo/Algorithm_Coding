#include <iostream>
using namespace std;
#include <vector>


int main(){
    int N,M;
    cin >> N >> M;

    vector<int> A(N + 1, 0);

    for(int s=0; s<M; s++){
                int i, j, k;

         cin >> i >> j >> k;
         for(int u=i; u<=j; u++){
           A[u]=k;
    }
    }
    for(int t=1; t<=N; t++){
        cout << A[t] <<" ";
    }
    cout << endl;
    return 0;
}