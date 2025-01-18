#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> res;

        for (auto num : nums) {
            m[num] >= 0 ? m[num]++ : m[num] = 1;
        }

        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        for (auto it : vec) {
            if (k--) res.push_back(it.first);
            else break;
        }

        return res;
    }
};
