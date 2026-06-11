class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        while(i<s.size()){
            while(i<s.size() && s[i]==' ') i++;
            int k = i;
            while(i<s.size() && s[i]!=' ') i++;
            int j = i-1;
            while(k<j){
                swap(s[k],s[j]);
                k++;
                j--;
            }
        }
        return s;
    }
};
