class Solution {
public:

    vector<vector<int>> ans;

    void backtrack(int n , int k , vector<int> &curr,int start){

        if(curr.size() == k){
            ans.push_back(curr);
            return;
        }

        for(int i=start; i<=n;i++){
            curr.push_back(i);
            backtrack(n,k,curr,i+1);
            curr.pop_back();
        }
    }




    vector<vector<int>> combine(int n, int k) {

        vector<int> curr;
        backtrack(n,k,curr,1);

        return ans;
        
    }
};