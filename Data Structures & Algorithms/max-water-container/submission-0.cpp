class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = INT_MIN;

       int left = 0;
       int right = heights.size() - 1;
       while( left < right){
        int current_height = min(heights[left], heights[right]);
            int current_width = right - left;
            int area = current_height * current_width;
        max_area = max(area , max_area);

        if( heights[left] < heights[right]){
            left++;
        }else{
            right--;
        }
       }
        return max_area;
    }
};
