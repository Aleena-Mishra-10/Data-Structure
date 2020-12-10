class Solution{
    public:
    int countBits(int a)
    {
    int count = 0;
    while (a) {
        if (a & 1)
            count += 1;
        a = a >> 1;
    }
    return count;
    }
    static bool cmp1(int a, int b)
   {
    //int count1 = countBits(a);
    //int count2 = countBits(b);
 // this takes care of the stability of
    // sorting algorithm too
    //if (count1 <= count2)
       // return false;
   // return true;
   return __builtin_popcount(a) > __builtin_popcount(b);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,cmp1);
    }
};
