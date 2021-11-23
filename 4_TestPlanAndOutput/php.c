#include<stdio.h>
#include<string.h>

void PhpPro()
{
	int option=4;
	int choise=0;
	int count=0;
	int no=0;
	int sum=0;
	printf("Total quesion is 5\n");
//	printf("please Enter how many quesion we can solve\n");
	printf("Please press 1 and Enter key to start quiz :");
	scanf("%d",&no);

	if(no==1)
	{
	
			printf("########################### START QUIZ ############################\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Q1:  The term PHP is an acronym for PHP:_______________.\n");
			printf("1:- Hypertext Preprocessor\n2:- Hypertext multiprocessor \n3:-  Hypertext markup Preprocessor \n4:- Hypertune Preprocessor\n");
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
			printf("--------------------------------------------------------------------------------\n");
		printf("Q2: PHP is a ____________ language?\n");
		printf("1:- user-side scripting\n2:- client-side scripting\n3:- server-side scripting\n4:- Both B and C\n");
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
		printf("Q3: Who among this is the founder of php language?\n");
		printf("1:-Tim Berners-Lee\n2:- Brendan Eich\n3:- Guido van Rossum\n4:- Rasmus Lerdorf\n");
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
		printf("Q4: In which year php was created?\n");
		printf("1:- 1993\n2:- 1994\n3:- 1995\n4:- 1995\n");
		printf("Enter your choise:");
		scanf("%d",&choise);

			if(choise==2)
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
		printf("Q5:  Which of the following is the correct syntax of php?\n");
		printf("1:-  <?php >\n2:- <php >\n3:- ?php ?\n4:- <?php ?>\n");
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
      		//File Handling
			FILE *fp;  
			fp=fopen("data.txt","a");  
			fprintf(fp,"Your PHP Quiz Score is :%d\n",sum);  
			
			fclose(fp);  
			printf("You Have Earn Total %d Coin :\n",sum);
			printf("--------------------------------------------------------------------------------\n");
	
			printf("###################### END OF THE QUIZ #########################\n");
		

	}
	else
	{
		printf("not valid input\n");
	}

}
