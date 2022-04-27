#include <stdio.h>

int main()
{
    int a[100002],i,p=1,n;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
        {
            scanf ("%d",&a[i]);
        }
    for (i=0;i<n;i++)
        {
            p *= a[i];
        }
    printf ("Product of all elements in the array = %d",p);
    return 0;
}
