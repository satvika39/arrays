#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<" enter n value";
	cin>>n;
	int arr[n];
	cout<<" enter elements in array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int res;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
		res=-1;
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=maxi)
		{
			if(res==-1)
			{
				res=i;
			}
			else
			{
				if(arr[i]>arr[res])
				{
					res=i;
				}
			}
		}
		
	}
	if(res==-1)
		{
			cout<<"no second largest  element ";
		}
		else
		{
			cout<<arr[res];
		}
	
	
}
