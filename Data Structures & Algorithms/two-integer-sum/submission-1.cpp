class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;
        for(int i=0; i<nums.size(); ++i){
            indices[nums[i]] = i;
        }

        for(int j=0; j<nums.size(); ++j){
            int diff = target - nums[j];
            if(indices.count(diff) && indices[diff] != j) return {j, indices[diff]};
        }

        return {};
    }
};
