
  Problem Link : https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i=0, j=n-1, cnt=0;
        while(i<=j){
            if(nums[i] == val){
                swap(nums[i], nums[j]);
                j--;
            }
            else{
                cnt++;
                i++;
            }
        }
        return cnt;
    }
};
