// Solution: #1
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int inedex;
        vector<int> ans(nums.size() * 2);

        inedex = 0;
        for(auto i : nums) {
            ans[inedex] = i;
            ans[inedex + nums.size()] = i;
            inedex++;
        }

        return (ans);
    }
};

// Solution: #2
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size() * 2);

        copy(nums.begin(), nums.end(), ans.begin());
        copy(nums.begin(), nums.end(), ans.begin() + nums.size());

        return (ans);
    }
};

// Solution: #2
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums);

        for (auto i : nums) {
            ans.push_back(i);
        }

        return (ans);
    }
};