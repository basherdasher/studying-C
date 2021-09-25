#include <stdio.h>
// count input symbols v1
main()
{
	long nc;
	nc = 0;

	while (getchar() != EOF)
		++nc;
	printf("\n%ld\n", nc);
}
