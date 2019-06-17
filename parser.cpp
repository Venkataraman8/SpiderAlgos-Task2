#include<iostream>
#include<stdio.h>

using namespace std;

int parser (string s)
{
	int total=0;
	int pos=0;
	
	for (int i=0;i<s.length();i++)
	{	
	
		
		if(s[i]=='<')
		total++;
		
		else
		if(s[i]=='>')
		total--;
		
		if(total==0 && i>0)
			pos=i+1;
			
		else if(total<0)
		break;
	}
	
	return pos;
}

int main()
{
	string str[500]; int n;
	
	cin>> n;
	cin.ignore(256, '\n');
	for(int i=0;i<n;i++)
	{
		getline( cin, str[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<parser(str[i])<<endl;
	}
	
}
