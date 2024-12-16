class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        while(k > 0) {
            int mini=Integer.MAX_VALUE, idx=0;
            for(int i=0;i<nums.length;i++) {
                if(nums[i] < mini) {
                    mini=nums[i];
                    idx=i;
                }
            }

            nums[idx]*=multiplier;
            k--;
        }
        return nums;
    }
}