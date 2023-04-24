class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        int index = n/2;
        vector<int>ans(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i] < pivot){
              ans[count] = nums[i];
              count++; 
            } 
        }
        for(int i=0;i<n;i++){
          if(nums[i]==pivot){
              ans[count] = pivot;
              count++;
          }
        }
        for(int i=0;i<n;i++){
          if(nums[i]>pivot){
           ans[count] = nums[i];
           count++;
          }
        }
        return ans;
    }
};