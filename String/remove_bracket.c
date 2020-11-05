#include  <stdio.h>
int main()
{
    //Initializing variables.
    char str[100], str_no_spc[100];
    int i=0, j=0 ;
    
    //Accepting inputs.
    printf("Enter the string:\n");
    gets(str);
    
    //Iterating each character of string.
    while(str[i] != '\0')
    {
        if(str[i] != '(' &&  str[i] != ')')//Excluding brackets.
        {
            str_no_spc[j++] = str[i];
        }
        i++;
    }
    str_no_spc[j] = '\0';
    
    //Printing result.
    printf("The string after removing all the spaces is:\n%s", str_no_spc);
    return 0;
}
