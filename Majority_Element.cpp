#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
int count=1;
int ele=arr[0];
for(int i=0;i<n;i++){
	if(arr[i]==ele)
count++;
else if(count==0){
	count=1;
	ele=arr[i];
}
else
count--;
}

count=0;
for(int i=0;i<n;i++){
	if(ele==arr[i])
	count++;
}
return count>n/2?ele:-1;
}
