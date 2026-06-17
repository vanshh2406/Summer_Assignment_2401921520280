class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> st;
        for (int i : nums2){
            while (st.size()>0 && st.top()<i) {
                mp[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while (st.size()>0){
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int> ans;
        for (int j : nums1) {
            ans.push_back(mp[j]);
        }
        return ans;
    }
};
