class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // Sort by absolute value in descending order
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) > abs(b);
        });
        
        long long ans = 0;
        int n = nums.size();
        
        // The first ceiling(n/2) elements are the largest absolute values, 
        // we would place them at even indices (positive contribution)
        int numPositive = (n + 1) / 2; 
        
        for (int i = 0; i < n; i++) {
            // Cast to long long before squaring to prevent overflow
            long long square = (long long)nums[i] * nums[i]; 
            
            if (i < numPositive) {
                ans += square;
            } else {
                ans -= square;
            }
        }
        
        return ans;
    }
};