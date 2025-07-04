#include <iostream>
using namespace std;

int main(){
    int H,M;
    int S,R;
    int h,m;
    
    cin >> H >> M;
    
    S = 60 * H + M - 45 ; 
    if (S<0){
      S+= 24*60;
    }
    h = S / 60;
    m = S % 60;
    
    cout << h << " " << m;
    return 0;
    
}