#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    if(n%i==0)
    if (flag==0)
    printf("%d is not a prime number.",n); 
    return 0;
}
