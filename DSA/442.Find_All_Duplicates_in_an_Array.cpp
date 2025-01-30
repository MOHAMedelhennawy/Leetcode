// Solution: #1
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = *max_element(nums.begin(), nums.end());
        vector<int> counter(size + 1, 0), res;

        for (auto i : nums) {
            counter[i] += 1;
        }

        for (int i = 0; i < counter.size(); i++) {
            if (counter[i] > 1) {
                res.push_back(i);
            }
        }

        return (res);
    }
};

// Solution: #2
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                res.push_back(nums[i]);
            }
        }

        return (res);
    }
};