class Solution {
public:
        
   vector<vector<string>> res;
bool issafe(vector<string> &v,int row,int col)
{
	for(int i=0;i<col;i++)
	{
		if(v[row][i]=='Q')
			return false;
	}
	for(int i=row,j=col;i>=0&&j>=0;i--,j--)
	{
		if(v[i][j]=='Q')
			return false;
	}
	for(int i=row,j=col;i<v.size()&&j>=0;i++,j--)
	{
		if(v[i][j]=='Q')
			return false;
	}
	return true;
}
void nQueens(vector<string> &v,int n,int col)
{
	if(col==n)
	{
		res.push_back(v);
		return ;
	}
	for(int i=0;i<n;i++)
	{
		if(issafe(v,i,col))
		{
			v[i][col]='Q';
			nQueens(v,n,col+1);
			v[i][col]='.';
		}
	}
}
vector<vector<string>> solveNQueens(int n) {
	string s;
	for(int i=0;i<n;i++)
	{
		s.push_back('.');
	}
	vector<string> v(n,s);
	nQueens(v,n,0);
	return res;

}
};
