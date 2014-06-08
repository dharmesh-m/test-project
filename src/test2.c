#include <stdio.h>

int subtract(int,int);
int addition(int,int);
int multiply(int,int);

int subtract(int a, int b){
	int c;
	c = a-b;
	return c;
}

int addition(int a, int b){
	int c = 0;
	c = a+b;
	return c;
}

int multiply(int a, int b){
	int c = 0;
	c = a*b;
	return c;
}
