class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        int nse[n];
        nse[n-1] = n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
            if(st.size()!=0) nse[i] = st.top();
            else nse[i] = n;
            st.push(i);
        }
        while(st.size()!=0) st.pop();
        int pse[n];
        pse[0] = -1;
        st.push(0);
        for(int i=0;i<n;i++){
            while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
            if(st.size()!=0) pse[i] = st.top();
            else pse[i] = -1;
            st.push(i);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int height = arr[i];
            int breadth = nse[i]-pse[i]-1;
            int area = height*breadth;
            ans = max(ans,area);
        }
        return ans;
    }
};
