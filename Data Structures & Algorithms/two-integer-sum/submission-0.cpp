class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> pair;
        for (int i=0; i < nums.size(); ++i){
            pair.push_back({nums[i], i});
        }
        sort(pair.begin(), pair.end());
        int i=0;int j=nums.size()-1;

        while (i < j){
            int current = pair[i].first + pair[j].first;
            if(current == target) return {min(pair[i].second, pair[j].second), max(pair[i].second, pair[j].second)};
            else if(current < target) i++;
            else j--;
        }
        return {};
    }
};
