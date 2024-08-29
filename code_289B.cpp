#include <bits/stdc++.h>

using namespace std;

char findTheDifference(string s, string t)
{
    char c=(char)0;
    int i, size = s.size();
    for (i = 0; i < size; ++i) {
        c^=s[i];
        c^=t[i]; 
    }
    c^=t[i];
    return c;
}

int main()
{
    string s = "abc", t = "bcae";
    cout << findTheDifference(s, t);
 
    return 0;
}