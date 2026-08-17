class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                }
                else {
                    s[i] = '#';   // invalid ')'
                }
            }
        }

        // Remaining '(' are invalid
        while (!st.empty()) {
            s[st.top()] = '#';
            st.pop();
        }

        // Remove marked characters
        string ans = "";

        for (char c : s) {
            if (c != '#') {
                ans += c;
            }
        }

        return ans;
    }
};