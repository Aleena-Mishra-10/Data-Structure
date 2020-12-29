int PalinArray(int a[], int n)
{  int rev=0,temp=0;
int flag=1;
for(int i=0;i<n;i++){
    temp=a[i];
    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(a[i]!=rev){
        flag=0;
        break;
    }
    rev=0;
}
return flag;
}
