#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x;
    cin >> y;

    if (0<x && 0<y)
        cout << '1' << endl;
    if (0<x && 0>y)
        cout << '4' << endl;
    if (0>x && 0<y)
        cout << '2' << endl;
    if (0>x && 0>y)
        cout << '3' << endl;
    
    return 0;
}