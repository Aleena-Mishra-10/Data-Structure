#include<stdio.h>
#include<stdlib.h>
int main(){
     int n ,i,k,j,m;
     printf("enter no of elements:\n");
     scanf("%d",&n);
     int a[n],freq[n];
     for(m=0;m<n;m++){
         scanf("%d",&a[m]);
     }
    int count;
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0; // avoid counting same element;
            }
        }
        if(freq[i]!=0){
                freq[i]=count;
        }  
    }
   
    int l ,pos;
    l=freq[0];
    for(k=0;k<n;k++){
        if(freq[k]>l){
            l=freq[k];
            pos=k;
        }
    }
    printf("Most repeating element is:%d",a[pos]);
     return 0;
}
