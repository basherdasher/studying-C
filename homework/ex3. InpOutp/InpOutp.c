#include <stdio.h>
// копирование ввода на вывод: версия 1
main()
{
	int c;
	putchar(EOF);
	printf( "\n");
	while ((c = getchar()) != EOF) {
		putchar(c);
		
	}
}
