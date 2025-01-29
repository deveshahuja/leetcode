#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int n = nums.size(), steps = 0;
    if(n == 1)  return true;
    for(int i = 0; i < n; i++) {
        if(steps < 0) return false;
        else if(steps < nums[i]) steps = nums[i];
        steps--;
    }
    return true;
}

int main()
{
    vector<int> nums = {3,2,1,0,4};
    cout << canJump(nums) << endl;
    return 0;
}