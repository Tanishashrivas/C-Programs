#include <stdio.h>
#include <conio.h>
int main()
{
int i,j, n, arr[20], small, large;
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
printf("\n Enter the elements : ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
small = large = arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<small)
{
small = arr[i];
}
}

for(j=1;j<n;j++)
{
if(arr[j]>large)
{
large = arr[j];
}
}
printf("\n The smallest element is : %d", small);
printf("\n The largest element is : %d", large);
return 0;
}
