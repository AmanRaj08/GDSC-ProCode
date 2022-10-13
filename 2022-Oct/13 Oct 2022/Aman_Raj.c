#include <stdio.h>
 
void rotate(int arr[], int n)
{
    int x = arr[0], i;
    for (i = 0; i <n-1; i++)
    {
    arr[i] = arr[i+1];
    }
    arr[n-1] = x;
}
 
int main()
{
    int i;
     int n;
     scanf("%d",&n);
     int arr[n];
     for (i = 0; i < n; i++)
     {
      scanf("%d", &arr[i]);
     }
    printf("Given array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    rotate(arr, n);
 
    printf("\nRotated array is\n");
    for (i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}
