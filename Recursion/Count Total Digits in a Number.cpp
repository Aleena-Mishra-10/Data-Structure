int countDigits(int n)
{
   if(n==0){
       return 1;
   }
   return log10(n)+1;
}
