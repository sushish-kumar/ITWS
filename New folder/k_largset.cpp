#include<iostream>
#include<algorithm>
using namespace std;
int k_largest(int arr[],int n,int k)
{
	sort(arr,arr+n,greater<int>());
	return arr[k-1];
}
int main()
{
	int arr[]={2,4,5,8,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<k_largest(arr,n,2);
	return 0;
}