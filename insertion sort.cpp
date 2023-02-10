#include <bits/stdc++.h>
using namespace std;

void sort(int A[],int n)
{
	int key,min;
for(int i=0;i<n;i++)
{
key=A[i];
int j=i-1;
while(j>=0 && A[j]>key)
{
	A[j+1]=A[j];
	j=j-1;
	}
	A[j+1]=key;
	
}

cout<<"sorted vector: ";
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";

}
 
int main() {
	int A[7]={6,1,2,3,4,6,1};
	int n=7;
	sort(A,n);
	

 
	return 0;
}
