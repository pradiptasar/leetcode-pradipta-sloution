class Solution {
public:

    vector<string> ans;

    void backTracking(int n, int k, string &s, int index, int cost){

        if(index == n){
            ans.push_back(s);
            return;
        }

        s[index]='0';
        backTracking(n,k,s,index+1,cost);
        if((index == 0 || s[index-1] != '1') && (cost+index <= k)){
            s[index] = '1';
            backTracking(n,k,s,index+1,cost+index);
            s[index] = '0';
        }
        
    }

    vector<string> generateValidStrings(int n, int k) {

        string s(n,'0');


        backTracking(n,k,s,0,0);

        return ans;




    }
};