#include <iostream>
using namespace std;
#define MAX 10
//Binary Search
int main() {
	int i,flag=0,low,mid,high;
	int a[MAX],key;
	for(i=0;i<MAX;i++)
	cin>>a[i];
	cin>>key;
	low=0;
	high=MAX-1;
	
	while(high-1!=low)
	{
	mid=(low+high)/2;
	if(key>a[mid])
	low=mid+1;
	else if(key<a[mid])
	high=mid-1;
	else if(key==a[mid])
	{
	flag=1;
	break;
	}
	}
	if(flag==1)
	cout<<mid+1;
	else
	cout<<"Not Found"<<endl;
	return 0;
}
