#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	
	int i,biggest;
	
	if(argc == 1)
	{
		return EXIT_FAILURE;
	}

	biggest = atoi(argv[1]);

	for(i = 1; i < argc; i++)
	{
		if(biggest < atoi(argv[i]))
		{
			biggest = atoi(argv[i]);
		}
	}
	
	printf("%d\n", biggest);

	return EXIT_SUCCESS;
}
