#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,max=0,min=1000;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
		for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
		else if(arr[i]<min)
		min=arr[i];
	}
	cout<<max+min;
	
return 0;
}
