class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        vector<int> v(150,0);
        for(int i=0;i<n;i++){
            v[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(v[s[i]]==1) return i;
        }
        return -1;
    }
};
