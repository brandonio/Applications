#include <stdio.h>
#include <stdbool.h>


bool isMultipleOfThreeANDFive(int n){ return n%3 == 0 && n%5 == 0; }
bool isMultipleOfThree(int n){ return n%3 == 0; }
bool isMultipleOfFive(int n){ return n%5 == 0; }


void buzzFizz(int n){
	if(isMultipleOfThreeANDFive(n)){
		printf("FIZZBUZZ\n");
	}else if(isMultipleOfThree(n)){
		printf("FIZZ\n");
	}else if(isMultipleOfFive(n)){
		printf("BUZZ\n");
	}
}


int main(void){
	for(int i = 1; i <= 100; i++){
		buzzFizz(i);
	}
}