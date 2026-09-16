class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size() - 1;

        while( low < high){

            int current_sum = nums[low] + nums[high];

            if( current_sum == target){
                return {low + 1 , high + 1};
            }
            else if( current_sum < target){
                low++;
            }
            else{
                high--;
            }
        }
        return {};
    }
};
