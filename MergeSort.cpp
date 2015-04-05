#include <iostream>
using namespace std;
void Merge(int *,int low,int high,int mid);
void MergeSort(int *a,int low,int high)
{
int mid;
if(low<high)
{
	mid=(low+high)/2;
	MergeSort(a,low,mid);
	MergeSort(a,mid+1,high);
	Merge(a,low,high,mid);
}
return;
}
void Merge(int *a,int low,int high,int mid)
{
	int i,j,k,c[50];
	
	i=low;j=mid+1;k=low;
	while(i<=mid && j<=high)
	{
	if(a[i]<a[j])
	{
	c[k]=a[i];
	k++;
	i++;
	}
	else
	{
	c[k]=a[j];
	k++;
	j++;
	}
	}
	while(i<=mid)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		c[k]=a[j];
		k++;
		j++;
	}
	 for (i = low; i < k; i++)
        a[i] = c[i];
}
int main() {
	int Arr[10];
	int i;
	for(i=0;i<10;i++)
	cin>>Arr[i];
	MergeSort(Arr,0,9);
	for(i=0;i<10;i++)
	cout<<Arr[i]<<" ";
	return 0;
}
