#include <iostream>

using namespace std;

int main()
{
	for(int i = 1; i <= 100; i++)
	{
		if(i % 2 == 0)
			cout<<i<<"\t";
		
		if(i % 20 == 0)
			cout<<endl;
	}
	
	return 0;
}
