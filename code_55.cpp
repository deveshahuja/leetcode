#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int n = nums.size();
    if(n == 1)  return true;
    int steps = nums[0], i = 0;
    while(i < n && steps > 0) {
        int j = 1, m = 0;
        while(j <= steps && i + j < n) {
            m = max(nums[i + j] + j, m);
            j++;
        }
        i += steps;
        if(i < n)   steps = max(nums[i], m - i);
        else return true;
    }
    return false;
}

int main()
{
    vector<int> nums = {2,0,0};
    cout << canJump(nums) << endl;
    return 0;
}