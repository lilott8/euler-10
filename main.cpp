/**
 *	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *		Find the sum of all the primes below two million
 *  answer: ???
 */
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define SIEVE_SIZE 2000000
/**
 *	Functions
 */
int totalOfPrimes ();
void init_sieve( int array[] );
unsigned long int find_primes( int array[] );
void print_sieve( int array[] );
/**
 *	Main
 */
int main() {

	int goal = SIEVE_SIZE;
	unsigned long int total = 0;
	int array[SIEVE_SIZE];
	init_sieve( array );

	total = find_primes( array );

//	print_sieve( array );

	cout << "Total: " << total << endl;

	return 0;
}//main

void init_sieve( int array[] ) {
	for( int a = 0; a < SIEVE_SIZE; a++ ) 
		array[a] = 0;
}//init_sieve

unsigned long int find_primes( int array[] ) {
	int i, i2;
	unsigned long int curr;
	for( i = 2; i < SIEVE_SIZE; i++ ) {//iterate through the whole sieve
		if( !array[i] ){//if it's prime, add it to number
			curr+=(unsigned long int)i;//add it
			for( i2 = i + i; i2 < SIEVE_SIZE; i2+=i ) {//start ruling out the multiples
				array[i2] = 1;
			}
		}
	}//for
return curr;
}//is_prime

void print_sieve( int array[] ) {
	for( int i = 0; i < 20; i++ )
		cout << i << ": " << array[i] << endl;
}
