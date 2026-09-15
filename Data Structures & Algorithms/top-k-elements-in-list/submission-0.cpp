class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // creating map mp
    unordered_map<int,int> mp;
    // storing values in map
    for( int num : nums){
        mp[num]++;
    } 
 
    // creating bucket
    vector<vector<int>> buckets(nums.size() + 1);
    // filling bucket 
     for( auto [element , count] : mp){
        buckets[count].push_back(element);
     }
     vector<int>ans;
     // traversing the bucket backwards
     for( int i = buckets.size() - 1 ; i >= 1 && ans.size() < k ; i--){
     for( int j : buckets[i]){
        ans.push_back(j);
        if( ans.size() == k){
            break ;
        }

     }
     } 
      return ans ;
    }
};
