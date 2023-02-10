#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
int temp;
cout<<"enter the number of element";
cin>>n;
int arr[n];
cout<<"enter the number of element ";
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}	
	
	

		for(int i=0; i<n-1;i++)
	{
	     int min=i;
	  
	       for(int j=i+1;j<n;j++)
         	{
		if(arr[j]<arr[min])
		min=j;
             }    
     
        temp=arr[min];
          arr[min]=arr[i];
          arr[i]=temp;
         
		}	
		
		
		
		
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	}
	
	
	
	

