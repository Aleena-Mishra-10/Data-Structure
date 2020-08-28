#include <stdio.h>
#include <limits.h>

int diff(int arr[], int n)
{

	int min_ele=arr[0];
	int diff=arr[1]-arr[0];
	int i;
	for(i=1;i<n;i++){
		if(arr[i]-min_ele>diff){
			diff=arr[i]-min_ele;
		}
		if(arr[i]<min_ele){
			min_ele=arr[i];
		}
	}
	

	return diff;
}

int main()
{
    int arr[] = { 10, 3, 6, 8, 9, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("The maximum difference is %d", diff(arr, n));

	return 0;
}
