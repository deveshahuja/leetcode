#include <bits/stdc++.h>
using namespace std;

int arraySign(vector<int>& nums) {
    int product = 1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0) product *= -1;
        else if(nums[i] > 0) product *= 1;
        else product *= 0;

    }
    if(product < 0) return -1;
    if(product > 0) return 1;
    return 0;
}

int main()
{
    vector<int> num = {-1,0,-3,-4,3,2,1};
    // vector<int> nums = plusOne(num);
    // for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    cout << arraySign(num);
    return 0;
}