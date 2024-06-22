// Problem Link: https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> umpp;

        for (int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];

            if (umpp.find(complement) != umpp.end()) {
                return {i, umpp[complement]};
            }

            umpp[nums[i]] = i;
        }

        return {};
        
    }
};