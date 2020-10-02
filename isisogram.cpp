#include<iostream>
using namespace std;
bool isisogram(string s1){
    int arr[26];
    int l=s1.length(),i=0;
    for(i=0;i<26;i++)
		arr[i]=0;
	for(i=0;i<l;i++){
	     s1[i]=tolower(s1[i]);
	     ++arr[s1[i]-97];
	     }
	for(i=0;i<l;i++){
		if(arr[s1[i]-97]>1)
			return false;
			}
		return true;	
		}
 int main(){
   int T;
   cin>>T;
   while(T--){
   	string s;
   	cin>>s;
   	if(isisogram(s))
   	    cout<<"Yes";
   	else
   		cout<<"No";
   }
   return 0;
    }
