#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size(), i = n - 1, sum = digits[i] + 1;
    while(sum > 9 && i > 0) {
        digits[i] = sum % 10;
        sum = 1 + digits[--i];
    }
    if(i == 0 && sum > 9) {
        digits[i] = 0;  
        digits.insert(digits.begin(), 1);
    } else  digits[i] = sum;
    return digits;
}

int main()
{
    vector<int> num = {2};
    vector<int> nums = plusOne(num);
    for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    return 0;
}