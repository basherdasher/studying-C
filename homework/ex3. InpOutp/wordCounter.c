#include <stdio.h>

#define IN 1	// in the  word
#define OUT 0	// out the word
//counting string, word and symbols
main()
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++n1;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("\nстрок: %d\nслов: %d\nсимволов:  %d\n", n1, nw, nc);
}
