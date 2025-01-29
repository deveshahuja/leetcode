#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size(), profit = 0;
    if(n < 2) return 0;
    for(int i = 1; i < n; i++) {
        profit = max(profit, profit + prices[i] - prices[i - 1]);
    }
    return profit;
}

int main()
{
    vector<int> nums = {7,6,4,3,1};
    cout << maxProfit(nums) << endl;
    return 0;
}