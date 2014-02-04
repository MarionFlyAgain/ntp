#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char * coucou = "bonjour";
	char * salut = "aurevoir";

	printf("%d\n", coucou ^ salut);

	return EXIT_SUCCESS;
}
