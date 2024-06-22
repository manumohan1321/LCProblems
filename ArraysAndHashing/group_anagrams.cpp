// Problem Link: https://leetcode.com/problems/group-anagrams/description/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> umpp;
        vector<vector<string>> res;

        for (int i=0; i<strs.size(); i++) {
            string key = createOrGetKey(strs[i]);
            umpp[key].push_back(strs[i]);
        }

        for (auto it=umpp.begin(); it!=umpp.end(); it++) {
            res.push_back(it->second);
        }

        return res;
    }

private:
    string createOrGetKey(string str) {
        vector<int> count(26);

        for (int j=0; j<str.size(); j++) {
            count[str[j] - 'a']++;
        }

        string customKey = "";
        for (int j=0; j<count.size(); j++) {
            customKey.append(to_string(count[j]) + '$');
        }

        return customKey;
    }
};