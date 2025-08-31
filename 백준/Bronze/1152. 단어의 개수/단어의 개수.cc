#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    
    string word;
    int count=0;
    stringstream ss(line);
    while(ss>>word){
        count++;
    }
    
    cout << count << '\n';
    return 0;
    
}