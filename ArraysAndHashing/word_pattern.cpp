// LC-290
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> v;

        string temp;
        stringstream ss(s);

        while(ss >> temp) v.push_back(temp);

        if (pattern.size() != v.size()) return false;

        map<char, string> mp;
        map<string, char> mp1;

        for (int i=0; i<pattern.size(); i++) {
            if (mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != v[i]) return false;

            if (mp1.find(v[i]) != mp1.end() && mp1[v[i]] != pattern[i]) return false;

            mp[pattern[i]] = v[i];
            mp1[v[i]] = pattern[i];
        }
        return true;
    }
};