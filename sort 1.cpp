#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<" enter n values ";
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int fl=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			fl=0;
			
		}
		if(fl==0)
		{
			break;
		}
	}
	if(fl==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
