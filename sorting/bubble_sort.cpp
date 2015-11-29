#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,n;
	cout<<"Enter array size : "<<endl;
	cin>>n;
	int a[n];
	cout<<"\nEnter your array : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEntered array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	cout<<"\nSorted array is : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
