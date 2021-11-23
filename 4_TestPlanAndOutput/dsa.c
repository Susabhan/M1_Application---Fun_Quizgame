#include<stdio.h>
#include<string.h>
void DSA()
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
			printf("Q1: Which one of the below mentioned is linear data structure ___\n");
			printf("1:- Queue\n2:- Stack \n3:- Arrays \n4:- All of the above\n");
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
		printf("Q2: Which one of the following is the correct option to create a new node?\n");
		printf("1:- ptr= (node*)malloc(sizeof(node*))\n2:- ptr=(node)malloc(sizeof(node))\n3:- ptr=(node*)malloc(sizeof(node))\n4:- None of the above\n");
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
		printf("Q3: Quick sort algorithm is an example of\n");
		printf("1:- Greedy approach\n2:- Improved binary search\n3:- Dynamic Programming\n4:- Divide and conquer\n");
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
		printf("Q4: Which of the following searching techniques do not require the data to be in sorted form\n");
		printf("1:- Binary Search\n2:- Interpolation Search\n3:- Linear Search\n4:- All of the above\n");
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
		printf("Q5: The number of binary trees with 3 nodes which when traversed in post order gives the sequence A,B,C is ?\n");
		printf("1:- 3\n2:- 4\n3:- 5\n4:- 6\n");
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
			fprintf(fp,"Your DSA Quiz Score is :%d\n",sum);  
			
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
