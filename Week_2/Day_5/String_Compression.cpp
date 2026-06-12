class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i=0;i<n;){
            char c = chars[i];
            int count = 0;
            while(i<n && chars[i]==c){
                i++;
                count++;
            }
            chars[idx] = c;
            idx++;
            if(count>1){
                string s = to_string(count);
                for(char c : s){
                    chars[idx] = c;
                    idx++;
                }
            }
        }
        return idx;
    }
};
