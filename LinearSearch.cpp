#include <iostream>
using namespace std;
#define MAX 5
int main()
{
int a[MAX];
int key,i,flag=0;
for(i=0;i<MAX;i++)
cin>>a[i];
cin>>key;
for(i=0;i<MAX;i++)
	{
	if(a[i]==key)
	{
	flag=1;
	break;
	}
	}
if(flag==1)
cout<<i+1;
else
cout<<"Not Found";
	return 0;
}
