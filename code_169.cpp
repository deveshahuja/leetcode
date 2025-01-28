#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0, candidate;
    for(int i = 0; i < nums.size(); i++) {
        if(count == 0)  candidate = nums[i];
        if(nums[i] == candidate) count++;
        else count--;
    }
    return candidate;
}

int main()
{
    vector<int> nums = {3,3,3,1,1,1,1};
    cout << majorityElement(nums) << endl;
    // for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    return 0;
}