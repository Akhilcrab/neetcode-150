class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        ans.reserve(nums1.size() + nums2.size());
       
        for( int i : nums1) ans.push_back(i);
        for( int i : nums2) ans.push_back(i);
        
        sort( ans.begin(),ans.end());
        
        double median = 0;
        int mid = ans.size() / 2 ;
        if( ans.size() % 2 != 0){
               median = ans[mid] ;
        }else{
            median = ( ans[mid] + ans[mid - 1] )/ 2.0;
        }
        return median ;
    }
};
