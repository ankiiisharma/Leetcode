#include<bits/stdc++.h>

int MinimumCommonInteger(int n, int m, int nums1[], int nums2[]){
 inn i = 0 ;
 int j = 0 ;


while(i<n && j<m){
	if(nums1[i] == nums2[j]){
		return nums1[i];
	}
	else if(nums1[i] < nums2[j]){
		i++;
	}
	else{
		j++;
	}
	return -1;
}

int main(){
int n,m;
cin>>n>>m;

int nums1[n];
int nums2[m]
for(int i=0;i<n;i++){
cin>>nums1[i];
}

for(int j=0;j<m;j++){
cin>>nums2[j];
}

int ans = MinimumCommonInteger(n,m,nums1,nums2);
cout<<ans;

}
