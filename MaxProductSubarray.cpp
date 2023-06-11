#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	int px=1,sx=1,maxp=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(px==0)px=1;
if(sx==0) sx=1;
         px*=arr[i];
         sx*=arr[n-i-1];
maxp=max(maxp,max(px,sx));
       }
       return maxp;
}
