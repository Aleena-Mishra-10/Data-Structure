int josephus(int n, int k)
{
   return n==1 ? 1:((k+josephus(n-1,k)-1)%n+1);
}
int main() 
{ 
    int n = 14; 
    int k = 2; 
    cout << "The chosen place is " << josephus(n, k); 
    return 0; 
} 
