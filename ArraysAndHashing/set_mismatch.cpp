// LC-645
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;

        unordered_map<int, int> mpp;

        int size = nums.size();

        for (int num : nums) { 
            if (mpp.find(num) != mpp.end()) {
                result.push_back(num);
            }
            else mpp[num] += 1;
        }

        for (int i=1; i<=size; i++) {
            if (mpp.find(i) == mpp.end()) {
                result.push_back(i);
                break;
            }
        }

        return result;

    }
};