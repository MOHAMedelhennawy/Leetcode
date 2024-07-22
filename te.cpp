#include<iostream>
#include<vector>

using namespace std;
int main() {
    vector<int> nums = {1,2,1};
    vector<int> ans(nums);

    for (auto i : nums) {
        ans.push_back(i);
    }

    for (auto i : ans) {
        cout << i << " ";
    }
}