class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            st.push(s[i]);
        }
        s.clear();

        while (!st.empty()) {
            char ch = st.top();
            s.push_back(ch);

            st.pop();
        }
    }
};