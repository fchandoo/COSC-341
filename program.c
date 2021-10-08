#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* CASE 1*/
double compute_pi(int n) {
	double pi = 0, num=1; /*intializing the variables*/
	int denom; 
	for (int z = 0; z < n;z++) {
		/*Calculationg the demonimator*/
		denom = 2*z+1; 
		if (z % 2 == 0) {/*if its even*/
			pi += (num / denom);}
		else { /*or odd*/
			pi -= (num / denom);
		}
	}
	pi *= 4;
	return pi; 
}
/* CASE 2*/
double compute_sqrt(double x) { 
	 double last = 1;
	 double next; 
	for (int z = 0; z < 10; z++) {// repeat the loop 10 times
		
		next = (0.5*(last + x / last));
		last = next; // last equals the next

	}
	return last; // return the square root

}

/* CASE 3*/

int is_prime(int n) { // finding if n is prime or not
	int remainder = 0; // variable to find the remainder

	for (int z = 2; z < n; z++) {
		// 
		if (n % z == 0) {
			//remainder++; 
			return 0; //not a prime numbr
		}
	}
	return 1; // all the checks failed must be a prime numebr
	
	/*if (remainder == 2) {
		return 1; // returns true
	}
	else {
		return 0; // returns false
	}*/
}
void display_primes(int n){
	
	for (int z = 2; z < n; z++) {
	
		int q = is_prime(z);/* calling the helper finction*/
		if (q == 1) {
			printf("%d ", z);
		}
	}
	printf("\n"); 
}

/* CASE 4*/

void process_scores() {
	int exit = 0; 
	char studentName[50]; /*String variable for student name*/
	/*variables to store Student scores, Average, Minimumand Maximum scores*/
	float scores = 0, averageScores = 0, minimunScores = 999, maximunScores = -1;
	/*Integer variable to store the number of students*/
	int studentCount = 0; 
	/*Total Score of Students*/
	float totalScore = 0; 
	/*Store the names of the Maximumand Minimum Students Scores*/
	char MinimunScoreName[50], MaximumScoreName[50] ; 

	while (exit==0) {
		/* the user is asking the students name */
		printf("Enter the Students Name and Score(press space before entering score) and q to Quit:");
		scanf("%s", studentName);
		if (studentName[0] == 'q' || studentName[0] == 'Q' && studentName[1]=='\0') {
			exit=1;
		}
		else {
			scanf("%f", &scores); 
			studentCount++; 
			totalScore += scores; 

			if (minimunScores >scores) {/*The current score is less than Minimum score*/
				minimunScores = scores;
				for (int x = 0; x < 50; x++) {/*get sthe name of the student with minimum score*/
					MinimunScoreName[x] = studentName[x]; 
				}
			}
			if (maximunScores < scores) {/* The current score is more than the Maximum score*/
				maximunScores = scores; 
				for (int x = 0; x < 50; x++) {/* get sthe name of the student with maximum score*/
					MaximumScoreName[x] = studentName[x];
					
				}
			}
		}
	}
	averageScores = totalScore / studentCount; //calculating the avergae score
	/*Preinting out the Average, Minimum, maximum score*/
	printf("Average Score: %.1f\n", averageScores); 
	printf("Minimum Scores: %.1f\n", minimunScores); 
	printf("Maximum Scores: %.1f\n", maximunScores); 
	/*Printing out the students name who received the minimumand max scores.*/
	printf("%s has the Minimun Score\n", MinimunScoreName);
	printf("%s has the Maximum Score\n", MaximumScoreName);
}

/* CASE 5*/

double compute_tax(int income, char* status, char state) {
	double tax;
	// if the tax payer is an instate resident
	if (state == 'i' || state == 'I') {
		//if the tax payer is instate and single 
		if (status == "single" || status == "SINGLE") {
			//if the person is instate and single and makes less than 30000
			if (income > 0 && income < 30000) {
				tax = 0.20 * income;
			}
			//if the tax payer is instate and single and makes more than 30000
			else if (income >= 30000) {
				tax = 0.25 * income;
			}
		}
		//if the tax payer is instate and married 
		else if (strcmp(status, "married") ==0 || strcmp(status, "MARRIED")==0) {
			//if the tax payer is instate and married and makes less than 50000
			if (income > 0 && income < 50000) {
				tax = 0.10 * income;
			}
			//if the tax payer is instate and married and makes more than 50000
			else if (income >= 50000) {
				tax = 0.15 * income;
			}
		}
	}
	/*if the tax payer is out of state*/
	else if (state == 'o' || state == 'O') {
		/*if the tax payer is out of stateand single*/
		if (status== "single" || status == "SINGLE") {
			/*if the tax payer is out of stateand singleand makes less than 30000*/
			if (income > 0 && income < 30000) {
				tax = 0.17 * income;
			}
			/*if the tax payer is out of stateand singleand makes more than 30000*/
			else if (income >= 30000) {
				tax = 0.22 * income;
			}
			/*if the tax payer is out of stateand married*/
			else if (strcmp(status, "married") == 0 || strcmp(status, "MARRIED") == 0) {
				//if the tax payer is out of state and married and makes less than 50000
				if (income > 0 && income < 50000) {
					tax = 0.07 * income;
				}
				/*if the tax payer is out of stateand marriedand makes more than 50000*/
				else if (income >= 50000) {
					tax = 0.12 * income;
				}
			}
		}
	}
}


/* CASE 6*/

int quadratic(double a, double b, double c, double* solution1, double* solution2) {
	double d = b * b - 4 * a * c; 
	if (d < 0) {
		*solution1 = 0; 
		*solution2 = 0; 
		return 0; /* return false*/
	}
	else {
		*solution1 = (-b + sqrt(d)) / (2.0 * a);
		*solution2 = (-b - sqrt(d)) / (2.0 * a); 
		return 1; /* return true*/
	}
}

/* CASE 7*/
int factorial(int n) {
	if (n == 0) { //Base case of the factorial function
		return 1; 
	}
	else { //Recursive call of the factorial function
		return n * factorial(n - 1); 
	}
}


/* CASE 8*/
/*
void file_count(char* file, int* characters, int* lines) {
	FILE* fp;
	fp = fopen(file, "r");
	char num_characters; 
	int countLines = 1; 
	int countCharacters = 0; 

	if (fp == NULL) {
		printf("FILE DOESNOT EXIST"); 
	}
	else {
		while (num_characters = fgetc(fp) != EOF) {
			if (num_characters == '\n') {
				countLines++; 
			}
			else if (num_characters != ' ') {
				countCharacters;
			}
		}
		printf("Number of Characters: %d \n", countCharacters);
		printf("Number of lines: %d \n", countLines); 
	}
}
*/
/* CASE 9*/

void file_sort(char* infile, char* outfile) {
	FILE* fp; 
	fp = fopen(infile, "r"); 
	
	int ID [10]; 
	char grade [10]; 
	double gpa [10]; 

	if (fp == NULL) {
		printf("Error in opening the file"); 
		exit(1); 
	}
	for (int z = 0; z < 10; z++) {
		if(ID==)

	}

}

/* CASE 10*/
/*
void file_student(char* infile) {

}
*/


int main() {
	int choice;

	double y = 0;
	int a, f,b;
	double z, l,m,n, q;
	printf("WELCOME TO C PROGRAMIMG\n");
	while (choice != 11) {
		// Choose from the main menu
		printf("\n1- Computing PI\n");
		printf("2- Computing Square Root\n");
		printf("3- Displaying Primes\n");
		printf("4- Processing Grades\n");
		printf("5- Computing tax\n");
		printf("6- Solving Quadratic\n");
		printf("7- Computing Factorial\n");
		printf("8- Counting file\n");
		printf("9- Sorting File\n");
		printf("10- Student File\n");
		printf("11- Quit\n");

		printf("CHOOSE THE MENU BELOW:");
		scanf("%d", &choice);

		switch (choice) 
		{
		case 1:
			printf("Enter the Value of PI to compute: ");
			scanf("%d", &a);
			printf("Computer PI= %f", compute_pi(a));
			break;
		case 2:
				printf("Enter the value to find the square root: ");
				scanf("%lf", &z);
				printf("Square root is %lf", compute_sqrt(z));
				break;
		case 3:
			printf("Enter the prime number: ");
			scanf("%d", &b);
			display_primes(b);
			break;
		
		case 4: 
			//printf("Enter marks to calculate the grades: \n");
			//scanf("%d", grades);
			process_scores(); 
			//printf("The grades received are: %.2f", process_scores);
			break; 
		case 5: 
		case 6: 
			printf("Enter the 3 values for the quadratic function: \n");
			scanf("%f, %f, %f", &l, &m, &n);
			//q = quadratic(l, m, n);
			//printf("The quadratic function solutions are", quadratic(q[0], q[1]));
			break; 

		case 7: 
			printf("Enter the number to calculate factorials"); 
			scanf("%d", &f);
			printf("The answer for %d factorial is : %d", factorial, factorial(f));
			break;

		case 11:
				printf("Good Bye!!!");
				exit(0); // terminated the program

		default:
				printf("Please enter a valid choice: ");
				break;
				
			
		}
	}
}
