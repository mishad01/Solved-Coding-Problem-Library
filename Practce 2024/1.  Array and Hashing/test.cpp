class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rs = matrix.size();
        int cs = matrix[0].size();
        vector<bool>row(rs,0);
        vector<bool>col(cs,0);
        for(int i = 0;i<rs;i++ ){
            for(int j = 0;j<cs;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i = 0;i<rs;i++ ){
            for(int j = 0;j<cs;j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};