struct HeapNode { 
    int val; // value to be stored 
    int r; // Row number of value in 2D array 
    int c; // Column number of value in 2D array 
};

void swap(HeapNode *x, HeapNode *y) { 
    HeapNode z = *x; 
    *x = *y; 
    *y = z; 
} 

void minheapify(HeapNode harr[],int i, int size){
    int l=i*2+1;
    int r=i*2+2;
    int s=i;
    if(l<size && harr[l].val<harr[i].val){
        s = l;
    }
    if(r<size && harr[r].val<harr[s].val){
        s = r;
    }
    if(s!=i){
        swap(&harr[i],&harr[s]);
        minheapify(harr,s,size);
    }
}

void buildHeap(HeapNode harr[], int n) 
{ 
    int i = (n - 1)/2; 
    while (i >= 0) 
    { 
        minheapify(harr, i, n); 
        i--; 
    } 
} 

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    if (k <= 0 || k > n*n) 
    return INT_MAX; 
 
    // Create a min heap of elements from first row of 2D array 
    HeapNode harr[n]; 
    for(int i = 0; i < n; i++) 
        harr[i] = {mat[0][i], 0, i}; 
    buildHeap(harr, n); 
    HeapNode hr; 
    for (int i = 0; i < k; i++) 
    { 
    // Get current heap root 
    hr = harr[0]; 
 
    // Get next value from column of root's value. If the 
    // value stored at root was last value in its column, 
    // then assign INFINITE as next value 
    int nextval = (hr.r < (n-1))? mat[hr.r + 1][hr.c]: INT_MAX; 
 
    // Update heap root with next value 
    harr[0] = {nextval, (hr.r) + 1, hr.c}; 
 
    // Heapify root 
    minheapify(harr, 0, n); 
    } 
 
    // Return the value at last extracted root 
    return hr.val;
}
