class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<string> st = strs;
        vector<vector<string>> ans;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            sort(st[i].begin(),st[i].end());
        }
        for(int i=0;i<n;i++){
            if(vis[i]!=false) continue;
            vector<string> v;
            for(int j=i;j<n;j++){
                if(vis[j]==false && st[i]==st[j]) {
                    v.push_back(strs[j]);
                    vis[j] = true;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};
