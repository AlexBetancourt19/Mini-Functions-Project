#include <iostream>
using namespace std;

int main() {
	int num = 0, i, j, res;

	for (i=1;i<=10;i++)
	{
		num++;
		cout<<"Table of "<<num<<": ";
		for(j=1;j<=10;j++)
		{	
			
			res = num*j;
			cout << res <<"   ";
		}
		cout<<endl;
	}
	cout<<endl; 
	return 0;
}