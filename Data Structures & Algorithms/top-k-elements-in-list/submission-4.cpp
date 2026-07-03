class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size()+1);

        for(int& num : nums){
            count[num]++;
        }

        for(auto& c : count){
            freq[c.second].push_back(c.first);
        }

        vector<int> result;

        for(int i=freq.size()-1; i > 0; --i){
            for(int& res : freq[i]){
                if(result.size() == k){
                    return result;
                }
                else{
                    result.push_back(res);
                }
            }
        }
        return result;
    }
};
