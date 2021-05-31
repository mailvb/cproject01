/*
 ============================================================================
 Name        : cproject01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */


		int i;
		    /* The loop goes while x < 10, and x increases by one every loop*/
		    for ( i = 0; i < 10; i++ ) {
		        /* Keep in mind that the loop condition checks
		           the conditional statement before it loops again.
		           consequently, when x equals 10 the loop breaks.
		           x is updated before the condition is checked. */
		        printf( "%d\n", i );
		    }


		int n = 20;
		int factorial = 1;

		// n! = 1*2*3...*n
		for (i = 1; i <= n; i++) {
			factorial *= i;
		}
		printf( "Factorial of %d is %d\n", n, factorial );
		return 0;
}
