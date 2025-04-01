
  Problem Link: https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n - 1, k = m + n - 1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                swap(nums1[i--], nums1[k--]);
            }
            else{
                swap(nums2[j--], nums1[k--]);
            }
        }
        while(i>=0){
            swap(nums1[i--], nums1[k--]);
        }
        while(j>=0){
            swap(nums2[j--], nums1[k--]);
        }
    }
};
