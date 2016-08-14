#include<iostream>
#include<string>
using namespace std;
int main()
{
	string data;
	cin>>data;
	for(int i=0;i<data.length()/2;i++)
	{
		
		swap(data[i],data[data.length()-i-1]);
	}
	cout<<data;
	return 0;
}
