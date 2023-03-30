# include "main.h"
/**
 * reverse_array - reverces the content of an array.
 * @n: is the number of elements in array.
 * @a: is a pointer.
 * Return reverced array.
 */
void reverse_array(int *a, int n)
{
	int swp, begn, end;

	begn = 0;
	end = n - 1;
	while (begn < end)
	{
		swp = *(a + begn);
		*(a + begn) = *(a + end);
		*(a + end) = swp;
		begn++;
		end--;
	}
}
