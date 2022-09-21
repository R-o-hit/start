#include<bits\stdc++.h>
using namespace std;
int main()
{ int k=0;
int num;
cin>>num;
	while(num!=0)
	{ k++;
	if(num%2==0)
	{
		num=num/2;
		
	}
	else
	{num=num-1;
	}
		
	}
	cout<<k;
	return 0;
	
	
}
