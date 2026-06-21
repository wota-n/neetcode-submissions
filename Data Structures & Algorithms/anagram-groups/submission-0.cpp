class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagramMap;
        int n = strs.size();

        for(int i = 0; i < n; ++i){
            string key = strs[i];
            sort(key.begin(), key.end());
            anagramMap[key].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for(auto res : anagramMap){
            result.push_back(res.second);
        }

        return result;
    }
};
