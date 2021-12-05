#include <stdio.h>
int a1 = 300, a2 = 400;
void sub1( int x, int y );




int main()
{
	int a3 = 100, a4 = 200;
	sub1( a3, a4 );
	sub1( a1, a2 );
	printf( "%d,%d,%d,%d", a1, a2, a3, a4 );
	return(0);
}




void sub1( int x, int y )
{
	a1 = x; x = y; y = a1;
}
