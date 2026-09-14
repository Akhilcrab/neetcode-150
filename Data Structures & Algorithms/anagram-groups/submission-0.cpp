class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (const string& s : strs) {
            string key = s;  
            sort(key.begin(), key.end());  
            mp[key].push_back(s); 
        }

        vector<vector<string>> ans;
        ans.reserve(mp.size()); 
        
        for (auto& entry : mp) {
            
            ans.push_back(move(entry.second));
        }
        
        return ans;
    }
};