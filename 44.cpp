// 1
// 3 2
// 6 5 4
// 10 9 8 7 







#include<iostream>
using namespace std;
int main (){
	int i,j,k=0;
	int n=4;
	for(int i=1;i<=n;i++)
	{
		k+=i;
		for(int j=k;j>k-i;j--)
		{ 
		cout<<j;
		}
		cout<<"\n";
	}
}