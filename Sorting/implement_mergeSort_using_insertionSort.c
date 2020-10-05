#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const int THRESHOLD=10;
void insertionSort(int arr[], int l,int r)
{
    int i, key, j;
    for (i = l; i <= r; i++) {
        key = arr[i];
        j = i;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >l && arr[j-1] > key) {
            arr[j ] = arr[j-1];
            j = j - 1;
        }
        arr[j] = key;
    }
}
void merge(int a[100],int i1,int j1, int i2,int j2)
{
    int temp[100];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;
    while(i<=j1&&j<=j2)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=j1)
        temp[k++]=a[i++];
    while(j<=j2)
        temp[k++]=a[j++];
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}

void mergesort(int a[100],int i, int j)
{
    if(j-i<= THRESHOLD){
       insertionSort(a,i,j);
    }
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}
int main() {
    int n;
    printf("Enter n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
}

////    int arr[]={1,9,8,2,6,10,44,14,19,30};
////    mergesort(arr,0,9);
////    for(int i=0;i<10;i++){
////        printf("%d",arr[i]);
////    }
//   int testcases =1000;
//   srand(0);
//   int array[100];
//   clock_t start,end;
//
//   for(int i=0;i<testcases;i++){
//
//       for(int i=0;i<100;i++){
//           array[100]=rand()%100 + 1;
//       }
//       start=clock();
//       mergesort(array,0,100);
//       end=clock();
//       double time_taken=(double)((start-end)/CLOCKS_PER_SEC);
//       printf("Time taken %d\n",time_taken);
//   }
//}
