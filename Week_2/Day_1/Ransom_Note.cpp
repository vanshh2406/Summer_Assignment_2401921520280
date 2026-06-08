class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26, 0);
        for(char ch : magazine) {
            v[ch-'a']++;
        }
        for(char ch : ransomNote) {
            v[ch-'a']--;
            if(v[ch-'a']<0) {
                return false;
            }
        }
        return true;
    }
};
