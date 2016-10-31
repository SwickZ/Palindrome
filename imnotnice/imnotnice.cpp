#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	char Array1[6] = { 'g','a','l','l','a','m' };
	int i,r;

	for (int j = 5; j >= 0; j--)
	{
		
		i += 0;
		
		if (Array1[j] == Array1[i])
		{
			r += 0;
		}
		else
		{
			r += 1;
		}
		i++;
	}
	if (r == 0)
	{
		cout << "It is Palindrome\n";
	}
	else
	{
		cout << "It is not Palindrome\n";
	}
	system("pause");
	return 0;
}