#include<stdio.h>
int main(){
    int n=0,i=0,j=0,k=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    int a,e[n],o[n];
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0){
            e[j++]=a;
        }
        else{
            o[k++]=a;
        }
    }
    int c=0,f,s,ar[n];
    s=j+k;
    for(f=j;f<s;f++)
    {
        e[f]=o[c++];
    }
    int l;
    for(l=0;l<n;l++){
        printf("%d",e[l]);
    }
    return 0;
}