#include <iostream>
using namespace std;
void swap(int a[],int i,int j);
void QuickSort(int a[],int low,int high);
int partition(int a[],int low,int high)
{
int i,j;
i=low;
j=high+1;
while(true)
{
	while(a[++i]<a[low])
	if(i==high)
	break;
	while(a[--j]>a[low])
	if(j==low)
	break;
	if(i>=j)
	break;
	
	swap(a,i,j);
}
swap(a,low,j);
return j;
}

void QuickSort(int a[],int low,int high)
{
	if(low<high)
	{
		int piv;
		piv=partition(a,low,high);
		QuickSort(a,low,piv-1);
		QuickSort(a,piv+1,high);
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
	QuickSort(Arr,0,9);
	for(i=0;i<10;i++)
	cout<<Arr[i]<<" ";
	return 0;
}
