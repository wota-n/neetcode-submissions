class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        
        for (int num : nums) {
            if(u.count(num)) return true;
            u.insert(num);
        }
        return false;
    }
};