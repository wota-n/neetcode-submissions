class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagramMap;

        for(auto &i : strs){
            string key = i;
            sort(key.begin(), key.end());
            anagramMap[key].push_back(i);
        }

        vector<vector<string>> result;

        for(auto &res : anagramMap){
            result.push_back(res.second);
        }

        return result;
    }
};
