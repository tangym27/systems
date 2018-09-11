#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Problem 1: Find the sum of all the multiples of 3 or 5 below 1000
int sumMultiples(){
	int num, sum = 0;
	//go through numbers below 1000
	while (num < 1000){
		//checks if num is a multiple
		if ((num % 3 == 0) || (num % 5 == 0)){
			//adds num to the sum
			sum += num;
		}
		//updates number
		num++;
	}
	return sum;

}

// Problem 5: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int divisible(){
	int num=5250; // smallest number in which numbers 1-10 are factors
	int out = 0;  // 0 = not all factors are divisible, 1 = all factors are divisible 
	while (out == 0){
		// if num%12==0, 2,3,4,6 are factors, num%14==0, 7 is factor, num%15==0, 5 is factor. etc.
		for (int i = 11; i < 21; i++){
			// if number is not divisible, get out of the loop & update the number
			if (num%i != 0){
				num++;
				out = 0;
				break;
			}
			// number is currently divisible by every factor of i
			out = 1;
		}
	} 
	return num;
}


// Problem 6: Find the difference between the sum of the squares 
//		of the first one hundred natural numbers and the square of the sum.

int sumDiff (){
	int num = 1;
	int sum, sumSq = 0;
	//go through first hundred natural numbers
	while (num < 101){
		//sum of natural numbers
		sum += num;
		//sum of square of natural numbers
		sumSq += num * num;
		//updates number
		num++;
	}
	//square of sum of natural numbers
	sum *= sum;
	//difference between both sums
	return sum - sumSq;
}

int main(){
	printf("Problem 1: %d\n", sumMultiples());
	printf("Problem 5: %d\n", divisible());
	printf("Problem 6: %d\n", sumDiff());
	return 0;
}
