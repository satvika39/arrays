#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//*	int e,n;
//	cin>>n>>e;
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	int ind;
//	int fl=0;
//	for(int i=0;i<n;i++)
//	{
//		if(e==a[i])
//		{
//			ind=i;
//			break;
//		}
//	}
//	if(fl==1)
//	{
//		for(int i=ind;i<=n-1;i++)
//		{
//			a[i]=a[i+1];
//		}
//		n=n-1;
//		for(int i=0;i<n;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//	}
//	else
//	{
//		cout<<-1;
//	} 
   vector<int>ve={2,12,20,24};
   int x=12;
   auto it=find(ve.begin(),ve.end(),x);
   if(it!=ve.end())
   {
   	ve.erase(it);
   	for(auto it:ve)
	   cout<<it<<" ";
	
   }
   else
   {
   	cout<<-1;
   }
}
