#include <bits/stdc++.h>
vector<long long int>generateRow(int n){
vector<long long int>temp;
temp.push_back(1);
long long ans=1;
for(int col=1;col<n;col++){
  ans*=(n-col);
  ans/=col;
  temp.push_back(ans);
}
return temp;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long>>ans;
  for(int i=1;i<=n;i++)ans.push_back(generateRow(i));
  return ans;
}
