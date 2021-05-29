#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<" enter n values";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[n];
	}
	int fl=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		fl=1;
		break;
	}
	if(fl==0)
	{
		cout<<" sorted ";
	}
	else
	{
		cout<<" not sorted ";
	}
}
