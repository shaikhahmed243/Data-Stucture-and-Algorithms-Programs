# https://www.facebook.com/permalink.php?story_fbid=2830418890577388&id=100008279138695
# Subscribed by the Code House

#include<stdio.h>
int main()
{
int n, i, j, temp;
scanf("%d", &n);
int arr[n];
for(i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
for(i = 0; i < n - 1; i++) // to keep track of number of cycles
{
for(j = 0; j < n - i - 1; j++) // to compare the elements within the particular cycle
{
// swap if one element is greater than its adjacent element
if(arr[j] > arr[j + 1]) 
{
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
for(i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
}
