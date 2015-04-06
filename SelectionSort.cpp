#include <iostream>
using namespace std;
void swap(int a[],int i,int j);
void SelectionSort(int a[],int n)
{
int i,j,min;
for(i=0;i<n;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		min=j;
	}
	swap(a,i,min);
}
}
void swap(int a[],int i,int j)
{
int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

int main() {
	int i,Arr[10];
	for(i=0;i<10;i++)
	cin>>Arr[i];
	SelectionSort(Arr,10);
	for(i=0;i<10;i++)
	cout<<Arr[i]<<" ";
	return 0;
}
