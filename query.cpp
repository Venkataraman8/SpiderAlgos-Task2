#include<iostream>

using namespace std;
long slope[100000];

void add(long l, long u, long value)
{
	//slope values
	slope[l-1]+=value;
	slope[u]+=-(value);
}


long find(long arr[],long n)
{ 
	long big=arr[0]+slope[0];  //biggest
	long csum=slope[0];        //cumulative sum
	
	for(long i=1;i<n;i++)
	{
		csum+=slope[i];
		
		if(arr[i]+csum>big)
		big=arr[i]+csum;
	}
	
	return big;
}

int main()
{
	long arr[100000],q,n,l,u,val;
	
	cin>>n;
	cin>>q;
	for(long i=0;i<n;i++)
	{
		arr[i]=i+1;
	}

	
	for(long j=0;j<q;j++)
	{
		cin>>l>>u>>val;
		add(l,u,val);
	}
	
	
	cout<<find(arr,n);
}
