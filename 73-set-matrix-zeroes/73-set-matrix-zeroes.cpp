class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m= matrix[0].size();
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         ans[i][j]=matrix[i][;
        //     }
        // }
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            for(int j= 0;j<m;j++){
                if(matrix[i][j]==0){
                   v.push_back({i,j});
                }
            }
        }
        for(int k=0;k<v.size();k++){
            int row= v[k].first;
            int col= v[k].second;
            
            for(int i=0;i<n;i++){
            for(int j= 0;j<m;j++){
                matrix[row][j]=0;
                matrix[i][col]=0;
            }
        }
        }
        
        
    }
};