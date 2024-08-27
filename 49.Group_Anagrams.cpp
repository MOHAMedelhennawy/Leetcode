#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        vector<vector<string>> result;
    
        for (auto it : strs) {
            string s = it;

            sort(s.begin(), s.end());

            m[s].push_back(it);
        }

        for (auto it : m) {
            result.push_back(it.second);
        }
        return result;
    }
};
