#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int n;
//	cin>>n;
//	int cap;
//	cin>>cap;
//	int a[cap];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//		
//	}
//	int pos;
//	cin>>pos;
//	int x;
//	cin>>x;
//	int ind;
//	if(n==cap)
//	{
//		cout<<" array is filled";
//	}
//	else
//	int ind=pos-1;
//	for(int i=n-1;i>=ind;i--)
//	{
//		a[i+1]=a[i];
//	}
//	a[ind]=x;
//	n++;
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//*
	vector<int>ve={10,20,30};
	ve.insert(ve.begin(),100);
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	return 0;
}
