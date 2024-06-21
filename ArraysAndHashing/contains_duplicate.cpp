// Problem Link: https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for (int i=0; i<nums.size(); i++) {
            if (st.find(nums[i]) != st.end()) return true;

            st.insert(nums[i]);
        }
        
        return false;
    }
};

vector<int> parseInput(const string& input) {
    vector<int> result;
    char ch;
    int num;
    stringstream ss(input);

    ss >> ch;


    while (ss >> num) {
        result.push_back(num);
        ss >> ch;
    }
    return result;

}

int main() {
    Solution sol;
    string input;

    cin >> input;
    vector<int> nums = parseInput(input);

    if (sol.containsDuplicate(nums)) {
        cout << "true" << endl;
    }
    else cout << "false" << endl;

    return 0;

}
