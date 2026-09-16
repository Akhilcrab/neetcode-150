class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Handle empty input
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int maxlen = 1;
        int currentStreak = 1;

        for (int right = 1; right < nums.size(); right++) {
           
            // Skip duplicates (streak neither increases nor breaks)
            if (nums[right] == nums[right - 1]) {
                continue;
            }
            // Consecutive element found
            if (nums[right] == nums[right - 1] + 1) {
                currentStreak++;
            } 
            
            else {
                currentStreak = 1;
            }

            maxlen = max(maxlen, currentStreak);
        }

        return maxlen;
    } 
};