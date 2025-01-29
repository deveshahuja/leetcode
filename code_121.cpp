#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size(), profit = 0;
    if(n < 2) return 0;
    int minimum = prices[0];
    for(int i = 0; i < n; i++) {
        minimum = min(minimum, prices[i]);
        profit = max(prices[i] - minimum, profit);
    }
    return profit;
}

int main()
{
    vector<int> nums = {7,1,5,3,6,4};
    cout << maxProfit(nums) << endl;
    // for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    return 0;
}