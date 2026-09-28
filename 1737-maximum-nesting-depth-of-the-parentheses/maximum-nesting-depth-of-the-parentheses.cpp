class Solution {
public:
    int maxDepth(string s) {

        int max = 0;
        stack<char> st;
        for(int i = 0; i<s.length() ; i++){
            if(s[i] == '('){
                st.push(s[i]);
                if(st.size() > max){
                    max = st.size();
                }
            }
            else if(s[i] == ')'){
                st.pop();
            }
        }
        return max;
    }
};