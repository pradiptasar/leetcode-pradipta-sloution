class Solution {
public:

    vector<vector<string>> ans;

    bool isPalindrome(string &s, int start, int end){
        while(start<end){

            if(s[start] != s[end]){
                return false;
            }

            start++;
            end--;
        }

        return true;
    }

    void backtracking(string &s, int start, vector<string> &curr){
        if(start == s.size()){
            ans.push_back(curr);
            return;
        }

        for(int i= start; i<s.size() ;i++){
            if(isPalindrome(s,start,i)){
                curr.push_back(s.substr(start,i-start+1));
                backtracking(s,i+1,curr);
                curr.pop_back();
            }
        }
    }





    vector<vector<string>> partition(string s) {

        vector<string> curr;
        backtracking(s,0,curr);

        return ans;
        
    }
};