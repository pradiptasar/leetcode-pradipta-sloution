class Solution {
public:
    int sortPermutation(vector<int>& nums) {

        int n = nums.size();


        int k = ~0;
        bool isSorted = true;

        for(int i =0; i<n;i++){
            if(nums[i]!=i){
                isSorted  =  false;
                k&=nums[i];
            }
        }

        return isSorted? 0:k;
        
    }
};