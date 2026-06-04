class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = m-1;
        vector<int> v;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int j=minc;j<=maxc;j++){
                v.push_back(matrix[minr][j]);
            }
            minr++;
            //down
            if( minr>maxr || minc>maxc) break;
            for(int j=minr;j<=maxr;j++){
                v.push_back(matrix[j][maxc]);
            }
            maxc--;
            //left
            if( minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                v.push_back(matrix[maxr][j]);
            }
            maxr--;
            //up
            if( minr>maxr || minc>maxc) break;
            for(int j=maxr;j>=minr;j--){
                v.push_back(matrix[j][minc]);
            }
            minc++;
        }
        return v;
    }
};
