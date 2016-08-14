#include<iostream>
#include<string>
using namespace std;

int main()
{
	string data;
	cin>>data;
	for(int i=0;i<data.length();i++)
	{
		if(i%2==0)
		cout<<data[i];
	}
	cout<<" ";
		for(int i=0;i<data.length();i++)
	{
		if(i%2!=0)
		cout<<data[i];
	}
return 0;
}
