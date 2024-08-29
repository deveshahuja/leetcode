#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map, t_map;
        if(s.size() != t.size())    return false;
        for(int i = 0; i < s.size(); i++)   s_map[s[i]]++;
        for(int i = 0; i < s.size(); i++)   t_map[t[i]]++;
        for(int i = 0; i < s.size(); i++)   {
            if(s_map[s[i]] != t_map[s[i]])  return false;
        }
        return true;
    }
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t);
    return 0;
}