#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
 
/* The function returns index of the first
non-repeating character in a string. If
all characters are repeating then
reurns INT_MAX */
int firstNonRepeating(char* str)
{
    // Initialize all characters as
    // absent.
    int arr[NO_OF_CHARS];
    for (int i = 0; i < NO_OF_CHARS; i++)
        arr[i] = -1;
 
    // After below loop, the value of
    // arr[x] is going to be index of
    // of x if x appears only once. Else
    // the value is going to be either
    // -1 or -2.
    for (int i = 0; str[i]; i++) {
        if (arr[str[i]] == -1)
            arr[str[i]] = i;
        else
            arr[str[i]] = -2;
    }
 
    int res = INT_MAX;
    for (int i = 0; i < NO_OF_CHARS; i++)
 
        // If this character occurs only
        // once and appears before the
        // current result, then update the
        // result
        if (arr[i] >= 0)
            res = min(res, arr[i]);
 
    return res;
}
 
/* Driver program to test above function */
int main()
{
    char str[] = "geeksforgeeks";
    int index = firstNonRepeating(str);
    if (index == INT_MAX)
        printf("Either all characters are "
               "repeating or string is empty");
    else
        printf("First non-repeating character"
               " is %c", str[index]);
    return 0;
}
