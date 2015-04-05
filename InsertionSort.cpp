#include <iostream>
using namespace std;
#define MAX 10
int main() {
	int i,j,key;
	int a[MAX];
	for(i=0;i<MAX;i++)
	cin>>a[i];
	for(j=1;j<MAX;j++)
	{
	i=j-1;
	key=a[j];
	while(i>=0 && a[i]>key)
	{
	a[i+1]=a[i];
	i=i-1;
	a[i+1]=key;
	}
}
for(i=0;i<MAX;i++)
cout<<a[i]<<" ";
	return 0;
}
