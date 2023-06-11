#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)sum=0;
        mx=max(mx,sum);
    }
    return mx;
}
