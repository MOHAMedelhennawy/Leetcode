/**
 * Solution: #1
 * Complexity: O(nlogn)
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        for(auto &it : nums)
        {
            it = pow(it, 2);
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
}

/**
 * Solution: #2
 * Complexity: O(n)
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sorted_array(nums.size());
        auto i = sorted_array.end() - 1;
        auto l = nums.begin(), r = nums.end() - 1;
    
        while (l <= r)
        {
            if (pow(*l, 2) >= pow(*r, 2))
            {
                *i = pow(*l, 2);
                l++;
            }
            else
            {
                *i = pow(*r, 2);
                r--;
            }

            i--;
        }
        return (sorted_array);
    }
};