#include <bits/stdc++.h>
using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {
    int n = arr.size();
    if(n < 3)   return true;
    sort(arr.begin(), arr.end());
    for(int i = 1; i < n - 1; i++){
        if(arr[i] - arr[i - 1] != arr[i + 1] - arr[i]) return false;
    }
    return true;
}

int main()
{
    vector<int> num = {1,2,4};
    cout << canMakeArithmeticProgression(num);
    return 0;
}