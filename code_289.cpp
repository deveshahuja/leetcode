#include <bits/stdc++.h>

using namespace std;

char findTheDifference(string s, string t)
{
    map<char, int> tmap;
    char ans;
    for(int i = 0; i<t.size(); i++){
        if(tmap.count(t[i])) tmap[t[i]]++;
        else tmap[t[i]] = 1;
    }

    for(int i = 0; i<s.size(); i++){
        if(tmap.count(s[i])) tmap[s[i]]--;
    }

    map<char, int>::iterator it = tmap.begin();
    while (it != tmap.end()) {        
        if(it->second) ans = it->first;
        ++it;
    }

    return ans;
}

int main()
{
    string s = "a", t = "aa";
    cout << findTheDifference(s, t);
 
    return 0;
}