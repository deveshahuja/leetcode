#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0, j = 0, n = nums.size();
    while(i < n - 1 && j < n - 1) {
        while(i < n - 1 && nums[i] != 0) i++;
        j = i;
        while(j < n - 1 && nums[j] == 0) j++;
        swap(nums[i], nums[j]);
    }
}

int main()
{
    vector<int> nums = {0,0};
    moveZeroes(nums);
    for(int i = 0; i<nums.size();i++)   cout << nums[i] << " ";
    return 0;
}