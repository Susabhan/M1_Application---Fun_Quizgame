#include<stdio.h>
#include<string.h>

void JavaPro()
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
			printf("Q1:  Which of the following is not a Java features?\n");
			printf("1:- Dynamic\n2:- Architecture Neutral \n3:- Use of pointers \n4:- Object-oriented\n");
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
		printf("Q2: Which of the following is a reserved keyword in Java?\n");
		printf("1:- object\n2:- strictfp\n3:- main\n4:- system\n");
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
		printf("Q3: Which keyword is used for accessing the features of a package?\n");
		printf("1:- package\n2:- import\n3:- extends\n4:- export\n");
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
		printf("Q4: An interface with no fields or methods is known as a ______.\n");
		printf("1:- Runnable Interface\n2:- Marker Interface\n3:- Abstract Interface\n4:- CharSequence Interface\n");
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
		printf("Q5: Which of the following is an immediate subclass of the Panel class?\n");
		printf("1:- Applet class\n2:- Window class\n3:- Frame class\n4:- Dialog class\n");
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
			
			//File Handling
			FILE *fp;  
			fp=fopen("data.txt","a");  
			fprintf(fp,"Your JAVA Quiz Score is :%d\n",sum);  
			
			fclose(fp);  
			printf("You Have Earn Total %d Coin :\n",sum);
			printf("--------------------------------------------------------------------------------\n");
	
			printf("###################### END OF THE QUIZ #########################\n");	
	}
	else
	{
		printf("not valid input\nS");
	}
}
