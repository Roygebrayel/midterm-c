
#include <iostream>
using namespace std;

int fct(int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	
		for (int j = 0; j < i*i; j++)
		
			sum++;
		
	
	return sum;
}

int main(void)
{
	int n = 16;
	cout << fct(n);
}