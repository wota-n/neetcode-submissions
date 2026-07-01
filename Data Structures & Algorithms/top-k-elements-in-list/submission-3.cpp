class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(auto& num : nums){
            count[num]++;
        }

        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > heap;

        for(auto& c: count){
            heap.push({c.second,c.first});

            if(heap.size() > k) heap.pop();
        }

        vector<int> result;

        for(int i=0; i<k; ++i){
            result.push_back(heap.top().second);
            heap.pop();
        }

        return result;




    }
};
