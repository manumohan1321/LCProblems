// LC - 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;

        unordered_map<int, int> mpp;

        for (int i=0; i<nums.size(); i++) {
            int compliment = target - nums[i];
            if (mpp.find(compliment) != mpp.end()) {
                res.push_back(mpp[compliment]);
                res.push_back(i);

                return res;
            }

            mpp[nums[i]] = i;

        }

        return res;
    }
};