#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Quick_Sort(int a[],int low,int high);
int partition(int a[],int l,int h);
void merge_sort(int a[],int l,int r);
void swap(int *a,int *b);
void merge(int arr[], int l, int m, int r);

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high- 1; j++) 
	{ 
		
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void Quick_Sort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		
		int pi = partition(arr, low, high); 

		
		Quick_Sort(arr, low, pi - 1); 
		Quick_Sort(arr, pi + 1, high); 
	} 
} 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	
	int L[n1], R[n2]; 

	
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	
	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	
	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	
	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void merge_sort(int arr[], int l, int r) 
{ 
	if (l < r) { 
		
		int m = l + (r - l) / 2; 

		
		merge_sort(arr, l, m); 
		merge_sort(arr, m + 1, r); 

		merge(arr, l, m, r); 
	} 
} 


int main(){
	
	int n=500,ch,i;
	int a[500];
	for(i=0;i<n;i++){
		a[i]=(rand()%(500));
	}
	printf("Please select a option\n");
	printf("1.Quick Sort\n2.Merge Sort\n");
	while(1){
		printf("\nEnter your Choice : ");
        scanf("%d", &ch);
        switch(ch){
        	case 1:{
				
        	clock_t t;
        		 t = clock();
        		Quick_Sort(a,0,n-1);
        		 t = clock()-t;
			    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
        		printf("Quick Sort took %f seconds to execute \n", time_taken); 
        		break;
        	}
        	case 2:
        		{
        	clock_t t;
        		 t = clock();
        		merge_sort(a,0,n-1);
        		t = clock()-t;
			    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
        		printf("Merge Sort took %f seconds to execute \n", time_taken); 
        		break;
        	}
        	default : 
        		break;
		}
	}
	return 0;
}
