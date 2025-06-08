#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 1)    return 1;
    int i = 0, j = 1, n = nums.size();
    while(j < n) {
        if(nums[i] == nums[j]) {
            j++;
        } else {
            
        }
    }
    return i + 1;
}

int main()
{
    vector<int> nums = {0,0,0,0,0,1,2,2};
    cout << removeDuplicates(nums) << endl;
    for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    return 0;
}