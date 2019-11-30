#include <stdio.h> 
int main() 
{ 

// Array declaration by initializing it with more 
// elements than specified size. 
int arr[2] = { 10, 20, 30, 40, 50 };
for(int i=0;i<5;i++)
    printf("%d\t",arr[i]);

return 0; 
}