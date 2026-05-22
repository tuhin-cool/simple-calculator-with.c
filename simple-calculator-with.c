#include<stdio.h>
#include<math.h>

int main(){
	double num1, num2;
	long results;
    char oper[3];
    
	printf("Enter first  numbers = ");
    scanf(" %lf", &num1);
	
    printf("Enter second  numbers = ");
    scanf(" %lf", &num2);
	
	printf("Enter an operator (+,-,*,/,**) = ");
    scanf("%s",&oper);

	if(strcmp(oper, "+") == 0){                   //I've rewritten the check to if else because it's better than the switch case and added more operators from himself
		results=num1+num2;
		printf("the value=%ld",results);
    }
    else if(strcmp(oper, "-") == 0){
   		results=num1-num2;
		printf("the value=%ld",results);
    }
    else if(strcmp(oper, "*") == 0){
   		results=num1*num2;
		printf("the value=%ld",results);
    }
    else if(strcmp(oper, "/") == 0){
   		double results=num1/num2;
		printf("the value=%lf",results);
    }
	else if(strcmp(oper, "**") == 0){
   		results=pow(num1,num2);
		printf("the value=%ld",results);
    }
    return 0;
 }
