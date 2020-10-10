class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    map<char , int> umap;
	    umap['!'] = 1;
	    umap['#'] = 1;
	    umap['$'] = 1;
	    umap['%'] = 1;
	    umap['&'] = 1;
	    umap['*'] = 1;
	    umap['@'] = 1;
	    umap['^'] = 1;
	    umap['~'] = 1;
	    for(int i=0;i<n;i++){
	        umap[nuts[i]]++;
	    }
	    int i=0;
	    for(auto x:umap){
	        if(x.second>1){
	            nuts[i] = x.first;
	            bolts[i] = x.first;
	            i++;
	        }
	    }
	}

};
