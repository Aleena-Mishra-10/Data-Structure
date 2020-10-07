int sumOfDigits(int n)
{
   
    if(n<1){
       return 0;
    }
    return sumOfDigits(n/10)+n%10;
    
}
