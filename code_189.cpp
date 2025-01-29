#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if(n == 1) return;
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

void rotate1(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ror(n);
    if(n == 1) return;
    for(int i = 0; i < n; i++) {
        ror[(i + k) % n] = nums[i];
    }
    for(int i = 0; i < n; i++) {
        nums[i] = ror[i];
    }
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6};
    int k = 2;
    rotate(nums, k);
    for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    return 0;
}