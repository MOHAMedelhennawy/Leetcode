class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> m;
        vector<vector<int>> result(2);

        for (auto it : nums1) {
            m[it] = 1;
        }

        for (auto it : nums2) {
            auto check = m.find(it);

            check != m.end() ? m[it] += 2 : m[it] = 2;
        }

        for (auto it : m) {
            it.second == 1 ? result[0].push_back(it.first) : (it.second == 2 ? result[1].push_back(it.first) : void());

        }


        return result;
    }
};