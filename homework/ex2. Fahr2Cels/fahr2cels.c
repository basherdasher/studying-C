#include <stdio.h>
/* Печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0,20, ..., 300 */
main()
{
	int fahr;
	printf("таблица температур по Фаренгейту и Цельсию от 300 до 0\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}
