#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}

void recbub(int a[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		if(a[i]<=a[i+1])
		continue;
		else
		{swap(a[i],a[i+1]);
		recbub(a,size);
		}
	}
}
int main()
{
	int size;
	cout<<"enter size ";
	cin>>size;
	int a[10000];
	cout<<"enter elements \n";
	for (int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	recbub(a,size);
	for (int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
}
