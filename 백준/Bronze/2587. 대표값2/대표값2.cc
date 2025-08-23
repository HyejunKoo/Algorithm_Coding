#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> nums(5);
    
    int sum=0;
    
    for(int i=0; i<5; i++){
        cin >> nums[i];
        sum += nums[i];
    }
    
    sort(nums.begin(), nums.end());
    
    int average = sum/5;
    int median = nums[2];
    
    cout << average <<endl;
    cout << median << endl;
    
    return 0;
    
    
}