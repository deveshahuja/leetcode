#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    if(n == 1)  return 0;
    int steps = nums[0], count = 0, i = 0;
    while(i < n) {
        int j = 1, max_steps = 0;
        while (j <= steps) {
            max_steps = max(max_steps, nums[j + i] + j + i);
            j++;
        }
        i += steps;
        steps = max(nums[i], max_steps - i);
        count++;
    }
    return count;
}

int main()
{
    vector<int> nums = {2,1};
    cout << jump(nums) << endl;
    return 0;
}