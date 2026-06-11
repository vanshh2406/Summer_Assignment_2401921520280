class Solution {
public:
    string decodeString(string s) {
        stack<int> st1;
        stack<string> st2;
        string curr = "";
        int num = 0;
        for(char ch : s) {
            if(isdigit(ch)) {
                num = num*10 + (ch-'0');
            }
            else if(ch == '[') {
                st1.push(num);
                st2.push(curr);
                num = 0;
                curr = "";
            }
            else if(ch == ']') {
                int repeat = st1.top();
                st1.pop();
                string prev = st2.top();
                st2.pop();
                while(repeat--) {
                    prev += curr;
                }
                curr = prev;
            }
            else {
                curr += ch;
            }
        }
        return curr;
    }
};
