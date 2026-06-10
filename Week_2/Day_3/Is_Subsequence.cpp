class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = s.size();
        int i = 0;
        int j = 0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                count--;
                i++;
                j++;
            }
            else j++;
        }
        return count==0;
    }
};
