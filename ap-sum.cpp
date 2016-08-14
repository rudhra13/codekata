#include<iostream>
using namespace std;

int main()
{
	int n,a,d;
	cin>>n>>a>>d;
	//int ap[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=(n/2)*((2*a)+((n-1)*d));
	}
	cout<<sum;
	return 0;
}
