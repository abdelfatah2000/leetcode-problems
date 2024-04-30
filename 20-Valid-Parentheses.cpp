class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        char x;
        for(int i = 0; i < s.length(); i++)
            {
            if(s[i] == 40 || s[i] == 123 || s[i] == 91) { st.push(s[i]);}
            if(s[i] == 41 || s[i] == 125 || s[i] == 93) 
                {
                x = st.top();
                if(st.empty() || (x == 40 && s[i] != 41) || (x == 123 && s[i] != 125) || (x == 91 && s[i] != 93)) {return false;}
                 st.pop();
                }
            }
       return st.empty();
        
    }
};