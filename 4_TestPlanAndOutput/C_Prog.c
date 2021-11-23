#include<stdio.h>
#include<string.h>
void Cprog()

{
	int option=4;
	int choise=0;
	int count=0;
	int no=0;
	int sum=0;
	printf("Total quesion is 10\n");
//	printf("please Enter how many quesion we can solve\n");
	printf("Please press 1 and Enter key to start quiz:");
	scanf("%d",&no);

	if(no==1)
	{

			printf("########################### START QUIZ ############################\n");
			printf("--------------------------------------------------------------------------------\n");
			printf("Q1: how many memory allocate in int data type\n");
			printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
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
		printf("Q2: how many memory allocate in float data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
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
		printf("Q3: how many memory allocate in char data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
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
		printf("Q4: how many memory allocate in double data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
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
		printf("Q5: how many memory allocate in array\n");
		printf("1:- 4byte\n2:- 8byte\n3:- 2byte\n4:- depends on data type\n");
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
		printf("Q6: how to use printf in c programming\n");
		printf("1:- it is use to display statement on console\n2:- its use to accept input\n3:- its use to paint data on screen\n4:- its use to print data in network\n");
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
		printf("Q7: how to use scanf\n");
		printf("1:- it is use to display statement on console\n2:- its use to accept input\n3:- its use to paint data on screen\n4:- its use to print data in network\n");
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
		printf("Q8: how many memory allocate in pointer\n");
		printf("1:- 4byte\n2:- 8byte\n3:- 2byte\n4:- depends on compiler\n");
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
		printf("Q9: which function are use to print statement on console in c programming\n");
		printf("1:- print\n2:- scanf\n3:- printff\n4:- printf\n");
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
		printf("Q10: which function are use to accept data in c programming\n");
		printf("1:- print\n2:- scanf\n3:- cin\n4:- printf\n");
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
			//File Handling
			FILE *fp;  
			fp=fopen("data.txt","a");  
			fprintf(fp,"Your C Programming Quiz Score is : %d\n",sum);  
			
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
