
  Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
  
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=0;
        while(i<n && j<n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                nums[++i] = nums[j++];
            }
        }
        return i+1;
    }
};
