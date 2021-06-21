/* Pawel Masluch, projekt 1.7 */

#include<stdio.h>
#include<math.h>


const double pi = M_PI; /* stala pi = 3,14... */


int main()
{
	double x; /* liczba rzeczywista dodatnia, oznaczajaca liczbe stopni */
	
	int n; /* zakladam, ze liczby naturalne sa to liczby 0, 1, 2, 3, ... */
	
	
	printf( "Podaj wartosc liczby naturalnej n: " );
	
	scanf( "%d", &n );
	
	
	printf( "Podaj wartosc x (w stopniach): " );
	
	scanf( "%lf", &x );
	
	
	x = pi * x / 180. ; /* zamiana ze stopni na radiany */
	
	
	double J1; /* zmienna ta odpowiada indeksowi "n-1" we wzorze rekurencyjnym */
	
	double J2; /* zmienna ta odpowiada indeksowi "n" we wzorze rekurencyjnym */
	
	double J3; /* zmienna ta odpowiada indeksowi "n+1" we wzorze rekurencyjnym */
	
	
	J1 = sqrt( 2./ pi/ x ) * cos(x); /* indeks rowny "-1/2" */
	
	J2 = sqrt( 2./ pi/ x ) * sin(x); /* indeks rowny "1/2" */
	
	
	J3 = J2;
	
	
	int i;
	
	for(i=1; i<=n; ++i)
	{
		J3 = ( (2.*i - 1.) / x ) * J2   -   J1;
		
		
		J1 = J2;
		
		J2 = J3;
	}
	
	
	printf( "\n\nWartosc funkcji to %lf\n\n", J3 );
	
	
	return 0;
}
