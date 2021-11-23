#include<stdio.h>
#include<string.h>
int main()
 //created by Kunal narkhede. 
 
{ 
	//Admin And Student Login
	char A='A';
	char S='S';
	char ch='\0';
	FILE *fp;
   	char str1[800];
	/////////////////////////////////////////////////////////////
    char username[15]; 
    char password[12]; 
	int l=0;
	int c=1;
	int cpp=2;
	int dsa=3;
	int Java=4;
	int PHP=5;
 
	printf("Press A For Admin Login\nPress S For Student Login\n");
	scanf("%c",&ch);
	if(A==ch)
	{
		printf("Enter your username:\n"); 
		scanf("%s",&username); 
	
		printf("Enter your password:\n"); 
		scanf("%s",&password); 
	
		if(strcmp(username,"Rushikesh_Narkhede")==0)
		{ 
			if(strcmp(password,"Rushi@123")==0)
			{ 
				printf("\nWelcome.Login Success! \n"); 
				//File Handling
				fp = fopen("data.txt", "a");
				//printf("Enter Student Name:\n");
				//scanf("%s",&str1);
				
				fprintf(fp, "Admin User Name is :%s\n",username);
				fprintf(fp,"Admin Password is :%s\n",password);
				
				printf("Your message is appended in data.txt file.");
				fclose(fp);
				printf("Select Any Language\n");
				printf("If you want start C_Programming quiz then Press 1\nIf you want start CPP quiz then Press 2\nIf you want start DSA quiz then Press 3\nIf you want start JAVA quiz then Press 4\nIf you want start PHP quiz then Press 5\n");
				printf("Enter your choise :");
				scanf("%d",&l);
				if(c==l)
				{
					Cprog();
				}
				else if(cpp==l)
				{
					CPP();
				}
				else if(dsa==l)
				{
					DSA();
				}
				else if(Java==l)
				{
					JavaPro();
				}
				else if (PHP==l)
				{
					PhpPro();
				}
				else
				{
					printf("Invalid choise: Please select Correct choise\n");
				}
			}
			else
			{ 
				printf("\nwrong password"); 
			} 
		}  
		else
		{ 
			printf("\nUser doesn't exist"); 
		} 
	}
	else if(S==ch)
	{
			
			fp = fopen("data.txt", "a");
			printf("Enter Student Name:\n");
			scanf(" %[^\n]",str1);
			
			fprintf(fp, "%s :\n",str1);
			
			printf("Your message is appended in data.txt file.");
			fclose(fp);
				printf("Select Any Language\n");
				printf("If you want start C_Programming quiz then Press 1\nIf you want start CPP quiz then Press 2\nIf you want start DSA quiz then Press 3\nIf you want start JAVA quiz then Press 4\nIf you want start PHP quiz then Press 5\n");
				printf("Enter your choise :");
				scanf("%d",&l);
				if(c==l)
				{
					Cprog();
				}
				else if(cpp==l)
				{
					CPP();
				}
				else if(dsa==l)
				{
					DSA();
				}
				else if(Java==l)
				{
					JavaPro();
				}
				else if (PHP==l)
				{
					PhpPro();
				}
				else
				{
					printf("Invalid choise: Please select Correct choise\n");
				}
			
	}
   
 	return 0;
}  
