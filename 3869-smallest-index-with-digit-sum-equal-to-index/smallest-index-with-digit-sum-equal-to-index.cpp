class Solution {
public:
    int sumation(int num){
        int sum =0;
        while(num){
            sum += num%10;
            num = num/10;
        }

        return sum;
    }


    int smallestIndex(vector<int>& nums) {
      int ans =INT_MAX;

      for(int i=0;i<nums.size();i++){
        if(sumation(nums[i])==i){
            ans =  min (ans,i);
        }
      }
        

        if (ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};