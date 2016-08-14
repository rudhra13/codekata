#include<iostream>
#include<string>
using namespace std;

int main()
{
	string data;
	cin>>data;
	int count=0;
	for(int i=0;i<data.length();i++)
	{
		if(data[i]>='a'&& data[i]<='z')
		count++;
	}
	cout<<count;
	return 0;
}
