class Solution {
public:
    int maxDepth(string s) {

        int max_depth = 0;
        stack<char> st;
        for(int i = 0; i<s.length() ; i++){
            if(s[i] == '('){
                st.push(s[i]);
                max_depth = max(max_depth,(int)st.size());
            }
            else if(s[i] == ')'){
                st.pop();
            }
        }
        return max_depth;
    }
};