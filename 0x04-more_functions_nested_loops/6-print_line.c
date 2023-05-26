#include "main.h"

/**
 * more_numbers – print more numbers 
 */
void more_numbers(void)
{
    	if (n <= 0)
	{
		_putchar(‘\n’);
	}else
	{
		int i;

    		for (i = 1; i <= n; i++)
		{
    			_putchar(‘_’);	
		}
    		_putchar(‘\n’);

	}
}
