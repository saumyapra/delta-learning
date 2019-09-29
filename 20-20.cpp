#include <iostream>
#include<conio.h>
int main()
{
	int n, i, a[20],j=0,z;
	std::cin >> n;
	for (i=n; i>=1; i=i-3)
	{
		
			a[j++] = i;
			
			
	}
	j--;
	for (i = 1; i<= (n/2); i++)
	{
		std::cout<<std::endl;
		std::cin >> z;
		if(z==a[j])
		{
			
			std::cout<<std::endl<< z + 1;
			j--;
		}
		else
		{
			if (z > a[j + 1] && z < a[j])
				std::cout << std::endl << a[j--];
			else
			{		std::cout << "invalid";
			break;
		}
		}
		if (z == n)
		{
			
			std::cout << std::endl<<"user wins";
			break;
		}
		else if (j+1 == 0)
		{
			
			std::cout << std::endl<<"computer wins";
			break;
		}

	}
	_getch();
}

