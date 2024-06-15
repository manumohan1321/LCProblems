// LC - 49

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mpp;

        for (int i=0; i<strs.size(); i++) {
            string key = createOrGetKey(strs[i]);
            mpp[key].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            result.push_back(it->second);
        }

        return result;

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