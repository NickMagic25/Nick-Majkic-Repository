#include <stdio.h>
#include <string.h>

int main ()
{
  	char str[] ="";
  	char * pch;
	printf("Type in a sentence with 3 words or more\n");
	scanf("%s",str);
  	printf ("Splitting string \"%s\" into tokens:\n",str);
  	pch = strtok (str," ,.-");
 	 while (pch != NULL)
  	{
	       	printf ("%s\n",pch);
		pch = strtok (NULL, " ,.-");
  	}
  	return 0;
}

