#include<iostream>
#include<string>
using namespace std;

int main()
{
	string data;
	cin>>data;
	for(int i=0;i<data.length();i++)
	{
		if(data[i]>='a'&& data[i]<='z')
		data[i]='\r';
	}
	cout<<data;
	return 0;
}
