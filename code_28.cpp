#include <iostream>
using namespace std;

int strStr(string haystack, string needle)
{
    int ans = -1;
    for(int i = 0; i < haystack.size(); i++){
        int j = 0;
        while (haystack[i + j] == needle[j] && j < needle.size())
        {
            j++;
            if(j == needle.size()){
                return i;
            }
        }
    }
    return ans;
}

int main()
{
    string haystack = "sadbutsad", needle = "sad";
    cout << strStr(haystack, needle);
    return 0;
}