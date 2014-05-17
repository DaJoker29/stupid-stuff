/* 
 * 
 * 		Projected Mental Trait and Habit Evaluation Utilities
 * 		version 0.1 (November 16, 2011)
 * 		version 0.8 (February 5, 2012)
 * 
 * 		created: November 16, 2011
 * 		original language: C
 * 		current version: 0.2
 * 		Last update: December 13, 2011
 * 		
 * 		Description: Mock artificial intelligence program written in C. Designed to 
 * 			receive basic answers to specific questions regarding and reply with 
 * 			seemingly spontaneous and lifelike responses.
 * 
 * 
 */
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "prometheus.h"
#include "authenticate.h"
#include "slowprint.c"



int main()
{
	//initializing authentication prerequisites
	struct credentials c;
	strcpy(c.userName, "Zeus");
	strcpy(c.password, "Sparta");
	
	//calling authenticate() function and proceeding if returns 0
	
	system("sleep 1");
	print("...initializing...\n.");
	system("sleep 0.5");
	print("..authentication required...");
	system("sleep 1");
	if (authenticate(&c) == 0)
	{

		/* Start of Prometheus: Slow Print initialization*/
		
		char name[40];
	
		print("...authentication complete...\n");
		system("sleep 2");
		print("...loading configuration...\n");
		system("sleep 3");
		print("...finalizing implementation and securing pipes, please wait...\n\n");
		system("sleep 3");
		print("\t___Launching ");
		print(AI);
		print(" Artificial AI___\n\n\n\n");
		system("sleep 1");
		print(">>\tHello. My name is ");
		print(AI);
		print(".");
		system("sleep 3");
		print(" What is your name?\n<<\t ");
		gets(name);
		system("sleep 2");
		print(">>\tNice to meet you, ");
		print(name);
		system("sleep 1");
		print("\n");
		
		/*For loop to change the subject each time*/
		
		int points = 0;
		int i = 0;
		for (i = 0; i < 7; i++)
		{
			char answers[20];
			char response[7][255];
			
			switch(i)
			{
				case 0: strcpy(answers, "Color"); break;
				case 1: strcpy(answers, "Food"); break;
				case 2: strcpy(answers, "Book"); break;
				case 3: strcpy(answers, "Music"); break;
				case 4: strcpy(answers, "Movie"); break;
				case 5: strcpy(answers, "Song"); break;
				case 6: strcpy(answers, "Instrument"); break;
			}

			/*Actual question text*/
			print("\n>>\tWhat is your favorite ");
			print(answers);
			print("\n<<\t ");	
			gets(response[i]);
			system("sleep 1");

			/*If answer has even number of characters and greater than 0, user gets a point*/
			if (((strlen(response[i]) % 2) == 0) && (strlen(response[i]) > 0))
			{
			
				print(">>\tSweet\n");
				points++;
			/*
				char *local[1024] = NULL; 
				
				FILE *f;
				f = fopen("positive.txt", r);
				size_t fread(local)
				print(">>\tYay\n");
				points++;*/
			}
			else
				print(">>\tBoo\n");
				
			system("sleep 1");

		}

		/*divides 7 by the number of points the user has
		 * If result is greater than 0.5, they win.*/
		
		float score = points / 7.0;
		char* result;
		if (score > 0.5)
			result = "Passed\n\n>>\tYou're officially awesome.";
		else
			result = "Failed\n\n>>\tYou suck at life, Lauren.";
			
		print("\n\n\n>>\tEvaluation Complete....\n\n");
		system("sleep 1");
		print("Calculating.");
		system("sleep 2");
		print("\n\n...");
		system("sleep 2");
		print("\n\n...");
		system("sleep 2");
		print("\n\n...");
		system("sleep 1");
		print("\n\n\n\nResult: ");
		system("sleep 2");
		print(result);
		system("sleep 1");
		print("\n\n\n");
		system("sleep 2");
		print("...session ended...\n");
		system("sleep 2");
		print("...closing connection...\n");
		system("sleep 2");
	}
	else
		/*If authentication fails, Prometheus doesn't launch'*/
		print("...initialization failed...\n...Closing connection...\n");

	return 0;
}
