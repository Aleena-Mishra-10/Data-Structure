vector <vector <int> > nearest(vector<vector<int>> &arr, int row, int col) {

    
    queue<pair<int,int>>q;
    vector<vector<int>>dist(row,vector<int>(col,INT_MAX));
     for(int i=0;i<arr.size();i++)
  {
      for(int j=0;j<arr[0].size();j++)
      {
          if(arr[i][j]==1)
          {
           q.push({i,j});
           dist[i][j]=0;
          }
      }
  }
   int x_dir[]={-1,0,1,0};
  int y_dir[]={0,-1,0,1};
  while(!q.empty())
  {
      pair<int,int>temp=q.front();
      int i=temp.first;
      int j=temp.second;
      q.pop();
      for(int k=0;k<4;k++)
      {
          int x_new=i+x_dir[k];
          int y_new=j+y_dir[k];
          if(x_new>=0&&x_new<row&&y_new>=0&&y_new<col&&dist[x_new][y_new]>dist[i][j]+1)
          {
              dist[x_new][y_new]=dist[i][j]+1;
              q.push({x_new,y_new});
          }
      }
  }
  return dist;
}
