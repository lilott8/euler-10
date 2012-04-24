/**
 *	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 *		Find the sum of all the primes below two million
 */
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

/**
 *	Functions
 */
int isPrime( int num );
int totalOfPrimes ();

/**
 *	Structures
 */
struct node {
	int data;
	node *next;
};

/**
 *	Main
 */
int main() {

	int goal = 2000000;
	int x,num_primes;
	num_primes = 0;
	int total = 0;
	int list[1000000];
	int sizeof_list = sizeof(list);
	//init our linked list
	node *head;
	head = new node;
	head->next = NULL;
	head->data = 2;
	//create a temp node

	for(x=2;x<goal;x++){
		if(isPrime(x)){
			list[num_primes] = x;
			num_primes++;
		}//if isPrime
	}//for loop

	cout << "We found: " << num_primes << " Prime numbers" << endl;

	for(int a = 0; a < num_primes; a++) {
		total += list[a];
		//		cout << "We are tabulating totals..." << endl;
	}//for

	cout << "Total: " << total << endl;

	return 0;
}//main

int isPrime( int num ) {
	//we only need to check half the numbers!
	//the lower half of the numbers
	for(int i=2;i<num/2+1;i++ ) {
		if( num%i == 0 ) return 0;
	}
	return 1;
}//function

