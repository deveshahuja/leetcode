#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int x_start = 0, y_start = 0, x_end = matrix[0].size() - 1, y_end = matrix.size() - 1;
    int d = 0;
    vector<int> ans;
    while(x_start <= x_end && y_start <= y_end) {
        if(d == 0) {
            for(int i = x_start; i <= x_end; i++) ans.push_back(matrix[y_start][i]);
            y_start++;
            d = 1;
        } else if(d == 1) {
            for(int i = y_start; i <= y_end; i++) ans.push_back(matrix[i][x_end]);
            x_end--;
            d = 2;
        } else if(d == 2) {
            for(int i = x_end; i >= x_start; i--) ans.push_back(matrix[y_end][i]);
            y_end--;
            d = 3;
        } else if(d == 3) {
            for(int i = y_end; i >= y_start; i--) ans.push_back(matrix[i][x_start]);
            x_start++;
            d = 0;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> num = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // vector<vector<int>> num = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> nums = spiralOrder(num);
    for(int i = 0; i < nums.size(); i++)   cout << nums[i] << " ";
    // cout << spiralOrder(num);
    return 0;
}