using namespace std;
#include <bits/stdc++.h>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return (false);

        map<char, int> s_m;
        map<char, int> t_m;

        for (int i = 0; i < s.size(); i++) {
            s_m[s[i]]++;
            t_m[t[i]]++;
        }

        for (auto s_it = s_m.begin(), t_it = t_m.begin(); s_it != s_m.end(); s_it++, t_it++) {
            if (s_it->first != t_it->first || s_it->second != t_it->second)
                return (false);
        }

        return (true);
    }

};