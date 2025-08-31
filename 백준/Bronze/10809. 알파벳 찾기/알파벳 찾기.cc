#include <iostream>
#include <string>
using namespace std;

int main(){

    string S;
    cin >> S;
    
    for(char c='a'; c<='z'; c++){
         cout << (int)S.find(c) <<' ';
    }
}