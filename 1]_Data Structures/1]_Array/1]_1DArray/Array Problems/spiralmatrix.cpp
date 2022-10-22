class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
            
        int cnt=0;
        int total=row*col;
        //index
        int str = 0;
        int stc = 0;
        int enr = row-1;
        int enc = col-1;
        
        while(cnt<total)
        {
            for(int i=stc;cnt<total && i<=enc;i++)
            {
                ans.push_back(matrix[str][i]);
                cnt++;
            }
            str++;
            for(int i=str;cnt<total && i<=enr;i++)
            {
                ans.push_back(matrix[i][enc]);
                cnt++;
            }
            enc--;
            for(int i=enc;cnt<total && i>=stc;i--)
            {
                ans.push_back(matrix[enr][i]);
                cnt++;
            }
            enr--;
            for(int i=enr;cnt<total && i>=str;i--)
            {
                ans.push_back(matrix[i][stc]);
                cnt++;
            }
            stc++;
        }
        return ans;
    }
};
