#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<" enter n value";
	int val1,val2;
	int arr[n];
	cin>>arr[n];
	cout<<" enter array of elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	val1=INT_MIN,val2=INT_MIN;
	val1=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>val1)
		{
			val2=val1;
			val1=arr[i];
		}
		else
		{
			if(val2<arr[i])
			{
				val2=arr[i];
			}
			
		}
	}
	cout<<val2<<" ";
	
	
}
