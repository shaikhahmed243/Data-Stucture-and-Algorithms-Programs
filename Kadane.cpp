//  https://www.facebook.com/anul.rajeev/posts/345077733501869
//  Subscribed by Anul Rajeev

/* The following function illustrates Kadane's Algo - algo to find the maximum sum subarray  */
int maxSum(int A[], int n)
 {
     int res,maxEnding;
     res=maxEnding=A[0];
     for(int i=1;i<n;i++)
       {
           maxEnding=max(maxEnding+A[i],A[i]);
           res=max(res,maxEnding);
       }
     return res;
 }
