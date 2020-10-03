
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

#https://www.facebook.com/mission.gate.79/posts/327813885110980
#subscribed by code house

// C program for implementation of Bubble sort 
#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
