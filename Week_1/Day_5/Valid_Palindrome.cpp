class Solution {
public:
    bool isPalindrome(string s){
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i]+32;
            }
        }
        string ans = "";   
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z' || (s[i]>='0' && s[i]<='9')){
                ans.push_back(s[i]);
            }
            else continue;
        }
        string ans1;
        ans1 = ans;
        reverse(ans.begin(),ans.end());
        if(ans1==ans) return true;
        return false;
    }
};
