class Solution {
public:
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0; // Negative goal isn't possible with 0s and 1s
        int right = 0;
        int left = 0;
        int count = 0;
        int sum = 0;
        
        while(right < nums.size()){
            sum += nums[right];
            while(sum > goal){
                sum -= nums[left];
                left++;
            }
            // By doing this for every step, we correctly count ALL subarrays with sum <= goal
            count += (right - left + 1); 
            right++;
        }
        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Exact sum is (sum <= goal) - (sum <= goal - 1)
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};