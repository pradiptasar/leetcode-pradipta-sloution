class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        int count=0;

        for(auto c: s){
            if(c == '('){
                if(count >0){
                    str +=c;
                }
                count ++;
            }
            
            else{
                count--;
                if(count > 0){
                    str +=c;
                }
            }
        }
        return str;
    }
};