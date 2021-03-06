#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{	
	long int seed = atoi(*(argv+2));
	srand(time((argc == 3) ? &seed : NULL));
	int n = atoi(*(argv+1));
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square = new char*[n];
	for(int i = 0; i < n; i++)
	
		square[i] = new char [n];

	for(int i = 0; i < n*n; i++)
			
		square[i/n][i%n] = rand()%('a' - 'z' + 1) + 'a';

	return square;
}

void drawCharSquare(char **square, int n)
{	
	for(int i = 0; i < n*n; i++)
	
		printf("%c %c",square[i/n][i%n], (i%n == n-1) ? '\n' : ' ');

}
