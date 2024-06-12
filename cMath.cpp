#include <stdio.h>




//Function Protoypes
char userMenu();
int addition(int,int);  
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int modulus(int,int);
int prime(int);
long factorial(int); 
long power(int,int);
int fibonacci(int);



//Main Function
int main(void){
	//Variables that will be used
	int userSelection;
	int userFirstNumber;
	int userSecondNumnber;
	int result;
	int primeInput;
	int factorialInput;
	long fact;
	long exp;
	
	
	//userMenu Function Call
	userMenu();
	

			

	
	//Capturing user input for which operation
	printf("Please choose an operation: \n");
	scanf("%d",&userSelection);
	
	//while loop to allow user to choose multiple operations one after another until 7 is chose
	while( userSelection != 0){

		
		//if statement for selection 1
		if(userSelection == 1){
			printf("Enter the first number:\n");
			scanf("%d",&userFirstNumber);
			printf("Enter the second number:\n");
			scanf("%d",&userSecondNumnber);
			result = addition(userFirstNumber,userSecondNumnber);
			printf("%d + %d = %d\n",userFirstNumber,userSecondNumnber,result);
		}
		//if statement for selection 2
		if(userSelection == 2){
			printf("Enter the first number:\n");
			scanf("%d",&userFirstNumber);
			printf("Enter the second number:\n");
			scanf("%d",&userSecondNumnber);
			result = subtraction(userFirstNumber,userSecondNumnber);
			printf("%d - %d = %d\n",userFirstNumber,userSecondNumnber,result);
		}
		//if statement for selection 3
		if(userSelection == 3){
			printf("Enter the first number:\n");
			scanf("%d",&userFirstNumber);
			printf("Enter the second number:\n");
			scanf("%d",&userSecondNumnber);
			result = multiplication(userFirstNumber,userSecondNumnber);
			printf("%d * %d = %d\n",userFirstNumber,userSecondNumnber,result);
		}
		//if statement for selection 4
		if(userSelection == 4){
			printf("Enter the first number:\n");
			scanf("%d",&userFirstNumber);
			printf("Enter the second number:\n");
			scanf("%d",&userSecondNumnber);
			result = division(userFirstNumber,userSecondNumnber);
			printf("%d / %d = %d\n",userFirstNumber,userSecondNumnber,result);
		}
		//if statement for selection 5
		if(userSelection == 5){
			printf("Enter the first number:\n");
			scanf("%d",&userFirstNumber);
			printf("Enter the second number:\n");
			scanf("%d",&userSecondNumnber);
			result =modulus(userFirstNumber,userSecondNumnber);
			printf("%d %% %d = %d\n",userFirstNumber,userSecondNumnber,result);
		}
		//if statement for selection 6
		if(userSelection == 6){
			
			printf("Please Enter the number to be tested\n");
			scanf("%d",&primeInput);
			prime(primeInput);
			
		}
		//if statement for selection 7
		if(userSelection == 7){
			
			printf("Please Enter the number to be tested\n");
			scanf("%d",&factorialInput);
			fact = factorial(factorialInput);
			printf("Factorial of %d is: %ld \n\n\n",factorialInput,fact);
			
		}
		//if statement for selection 8
		if(userSelection == 8){
			printf("Enter the first number:\n");
			scanf("%d",&userFirstNumber);
			printf("Enter the second number:\n");
			scanf("%d",&userSecondNumnber);
			exp = power(userFirstNumber,userSecondNumnber);
			printf("%d ^ %d = %d\n",userFirstNumber,userSecondNumnber,exp);
		}
		//if statement for selection 9
		if(userSelection == 9){
			
			printf("Please Enter the elements in the fibonacci sequence\n");
			scanf("%d",&primeInput);
			
			fibonacci(primeInput);
			
			
	}
		
	
		//calling user menu function and capturing user selection, if 0 is chosen program will end
		userMenu();
		printf("Please choose an operation: \n\n\n");
		scanf("%d",&userSelection);
		
	}
	
}
//userMenu function to display a menu
char userMenu(){
	printf("Calculator Menu:\n");
	printf("(1) Addition \n");
	printf("(2) Subtraction \n");
	printf("(3) Multiplication \n");
	printf("(4) Division \n");
	printf("(5) Modulus (integers only) \n");
	printf("(6) Test if prime (integers only) \n");
	printf("(7) Factorial \n");
	printf("(8) Exit \n\n\n");
	
	
}

//addition function to calculate addition
int addition(int number1,int number2){
	 return number1 + number2;
}
//subtraction function to calculate subtraction from 2 numbers
int subtraction(int number1,int number2){
	 return number1 - number2;
}
//multiplication function
int multiplication(int number1,int number2){
	 return number1 * number2;
}
//division function
int division(int number1,int number2){
	 return number1 / number2;
}
//modulus function
int modulus(int number1,int number2){
	return number1 % number2;
}
//prime function to calculate if a number is prime or not     
int prime(int number){
	if(number == 1){
		printf("Number is not prime:\n");
	}
	
	for (int i = 2; i <= number/2; i++){
		if (number % i == 0){
			int result = number / 2;
			printf("\nNot Prime:2 x %d = %d  \n\n\n",result,number);
			break;
		}else{
		
			printf("%d is Prime \n");
		}
	
}
}

//recursive function to calculate the factorial of a given number by user input
//Can also be done using a for loop or procedural programming. However, I like to use recursive functions
long factorial(int number){
	if (number == 0){
		return 1;
	}else{
		return (number * factorial(number-1));
	}
	
}

//recursive function to calculate an exponent using a given number and the power to which that number is
//Can also be done using a for loop using the power as the control for the for loop and using =* on the number given. example for(int i = 0; i < power;i++){ result *= number;}
long power(int number1,int number2){
	if (number2 == 0){
		return 1;
	}else{
		return (number1 * power(number1,number2-1));
	}
}
// function to calculate fobonacci 
int fibonacci(int number){
	int array[number + 2];
	array[0]= 0;
	array[1]= 1;
	for (int i = 2; i < number;i++){
		array[i]= array[i-1] + array[i - 2];
	}
	
	for (int i =0; i < number; i++){
		printf("%d,", array[i]);
	}
	printf("\n");
}

