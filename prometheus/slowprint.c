#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



/* **************************************** */

void print(char str[])
{
	for(int i = 0; i < strlen(str);i++)
	{
		char string[1024];
		strcpy(string, str);
		printf("%c", string[i]);
		float  ran = (0.1);
		char val1[256];
		char val2[256];
		sprintf(val2, "%f", ran);
		strcpy(val1, "sleep ");
		strcat(val1, val2);
		system(val1);
		fflush(stdout);
	}


}
/* **************************************** */

/*int main(int argc, const char* argv[])
{		
	char str[255];
	if(argc == 1)
	{
		printf("What would you like to print out: ");
		scanf("%s", str);
	}
	else if(argc == 2)
	{
		strcpy(str, argv[1]) ;
	}
	else
	{
		printf("Incorrect syntax\n");
		return 1;
	}
	
	print(str);
	return 0;

}*/
