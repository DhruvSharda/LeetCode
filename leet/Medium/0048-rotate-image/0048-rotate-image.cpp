class Solution {
public:
    void roto(int k,int l,int m,vector<vector<int>>& matrix){
        int j=l;
        int i=k;
        for(int j=l;j<m-1;j++){
            if(j>l && j<m-1){
                swap(matrix[k][j],matrix[j][m-1]);
                swap(matrix[k][j],matrix[m-1][m-1-(j-l)]);
                swap(matrix[k][j],matrix[m-1-(j-l)][l]);
            }
            if(j==l){
                swap(matrix[k][l],matrix[k][m-1]);
                swap(matrix[k][l],matrix[m-1][m-1]);
                swap(matrix[k][l],matrix[m-1][l]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int a=m;
        int j=0;
        int i=0;
        while(j!=(m/2)+1){
            roto(i,j,a,matrix);
            i++;
            j++;
            a--;
        }
    }
};