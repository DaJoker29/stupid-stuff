/*
 * 
 * 	Really simple utility that accepts a predefined structure and accepts it as the base for comparison.
 * 	It then gets input through the console for username and password. Comparing it to the base.
 * 	If they come out true then it returns as 0, otherwise it returns a 1. You can also set a limit to the 
 * 	number of times the login can be attempted.
 * 
 * 
 * 
 * 
 * 
 */
#ifndef AUTHENTICATE_H
#define AUTHENTICATE_H
 
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

struct credentials {

	char userName[40];
	char password[40];
	unsigned int retries; 
};


int authenticate(struct credentials *account)
{
	//declaring attempt variables
	char user[40];
	char pass[40];
	
	//sets default retry count to 5 if not set already
	if (account->retries  == NULL)
		account->retries = 5;

	//initializing counters: i equals number of tries, j equals max number of tries
	int j = account->retries;
	int i;
	
	//Returns 0 if Password and Username match before j amount of tries; otherwise returns 1
	for(i = 0; i < j; i++)	
	{
		printf("\nUsername: ");
		gets(user);
		//printf("Password: ");
		strcpy(pass, getpass("Password: "));
		
		if(strcmp(user, account->userName) == 0)
		{
			if(strcmp(pass, account->password) == 0)
				return 0;
			else
				printf("\nIncorrect login. %d tries remaining.\n\n", ((j - i) - 1));
		}
		else
			printf("\nIncorrect login. %d tries remaining.\n\n", ((j - i) - 1));
	}
	
	return 1;
}

#endif
