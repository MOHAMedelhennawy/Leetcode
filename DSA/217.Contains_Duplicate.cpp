using namespace std;
#include <bits/stdc++.h>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> nums_map;

        for (int i = 0; i < nums.size(); i++) {
            nums_map[nums[i]]++;

            if (nums_map[nums[i]] > 1) {
                return (true);
            }
        }

        return (false);
    }
};
