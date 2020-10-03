#https://www.linkedin.com/posts/shivam-kaushal-17085b1a6_participate-in-hacktoberfest-2020-complete-activity-6717141760004497408-Kq6q
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];

            }
        }
    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}
