#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> counter;

        for (auto x : nums) {
            if (counter.find(x) == counter.end())
                counter.insert({x , 1});
            else
                counter[x]++;
        }

        auto max = counter.begin();
        for (auto it = counter.begin(); it != counter.end(); it++) {
            if (it->second > max->second) {
                max = it;
            }
        }

        return max->first;
    }
};

