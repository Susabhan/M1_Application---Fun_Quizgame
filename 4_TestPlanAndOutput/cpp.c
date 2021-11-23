#include<stdio.h>
#include<string.h>
void CPP()
{
	int option=4;
	int choise=0;
	int count=0;
	int no=0;
	int sum=0;
	printf("Total quesion is 5\n");
//	printf("please Enter how many quesion we can solve\n");
	printf("Please press 1 and Enter key to start quiz:");
	scanf("%d",&no);

	if(no==1)
	{

			printf("########################### START QUIZ ############################\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Q1: Which of the following features must be supported by any programming language to become a pure object-oriented programming language?\n");
			printf("1:- Encapsulation\n2:- Inheritance\n3:- Polymorphism\n4:- None of the above\n");
			printf("Enter your choise:");
			scanf("%d",&choise);

			if(choise==4)
			{
				printf("this is true answer\n");
				count++;
				sum=count+count;
				printf("You have earn %d coin :\n",sum);
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			else
			{
				printf("wronge answer\n");
			}
		    printf("--------------------------------------------------------------------------------\n");
		printf("Q2: Which of the following is the address operator?\n");
		printf("1:- @\n2:- #\n3:- &\n4:- +\n");
		printf("Enter your choise:");
		scanf("%d",&choise);

			if(choise==3)
			{
				printf("this is true answer\n");
				count++;
				sum=count+count;
				printf("You have earn %d coin :\n",sum);
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q3: The programming language that has the ability to create new data types is called___.\n");
		printf("1:- Overloaded\n2:- Encapsulated\n3:- Reprehensible\n4:- Extensible\n");
		printf("Enter your choise:");
		scanf("%d",&choise);

			if(choise==4)
			{
				printf("this is true answer\n");
				count++;
				sum=count+count;
				printf("You have earn %d coin :\n",sum);
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q4: Which of the following is the original creator of the C++ language?\n");
		printf("1:- Dennis Ritchie\n2:- Ken Thompson\n3:- Bjarne Stroustrup\n4:- Brian Kernighan\n");
		printf("Enter your choise:");
		scanf("%d",&choise);

			if(choise==3)
			{
				printf("this is true answer\n");
				count++;
				sum=count+count;
				printf("You have earn %d coin :\n",sum);
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			else
			{
				printf("wronge answer\n");
			}
			printf("--------------------------------------------------------------------------------\n");
		printf("Q5: Which of the following statements is correct about the formal parameters in C++?\n");
		printf("1:- Parameters with which functions are called\n2:- Parameters which are used in the definition of the function\n3:- Variables other than passed parameters in a function\n4:- Variables that are never used in the function\n");
		printf("Enter your choise:");
		scanf("%d",&choise);

			if(choise==1)
			{
				printf("this is true answer\n");
				count++;
				sum=count+count;
				printf("You have earn %d coin :\n",sum);
			}
			else if(option<choise)
			{
				printf("it is not valid choise\n");
			}
			else
			{
				printf("wronge answer\n");
			}
			//File Handling
			FILE *fp;  
			fp=fopen("data.txt","a");  
			fprintf(fp,"Your CPP Quiz Score is :%d\n",sum);  
			
			fclose(fp);  
			printf("You Have Earn Total %d Coin :\n",sum);
			EOF;
			printf("--------------------------------------------------------------------------------\n");
	
			printf("###################### END OF THE QUIZ #########################\n");
		
	}
	else
	{
		printf("not valid input\nS");
	}

}
