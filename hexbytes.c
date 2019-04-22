#include <stdio.h>
#include <stdlib.h>

#define BYTES_PER_LINE 16

void clear_buffer(char *buffer)
{
	for(int i = 0; i < BYTES_PER_LINE + 1; i++)
	{
		*(buffer + i) = 0;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		fprintf(stderr, "Usage: %s path\\to\\file\n", *argv);
		return 1;
	}

	char *path = *(argv + 1);
	FILE *file = fopen(path, "rb");
	if(file == NULL)
	{
		fprintf(stderr, "Error: cannot open file");
		return 1;
	}

	int c;
	int i = 0;
	char *buffer = malloc(sizeof(char) * (BYTES_PER_LINE + 1));
	clear_buffer(buffer);
	while((c = getc(file)) != EOF)
	{
		printf("%0.2x", c);
		if(c < '!' || c > '~')  // non-printable (see ascii table)
		{
			c = '.';
		}
		*(buffer + i) = (char) c;
		if(i == BYTES_PER_LINE - 1)
		{
			printf("\t\t%s\n", buffer);
			i = 0;
			clear_buffer(buffer);
		}
		else
		{
			printf(" ");
			i++;
		}
	}
	if(i != 0)
	{
		for(int j = 0; j < (BYTES_PER_LINE - i); j++)
		{
			if(j == 0)
			{
				printf(" ");
			}
			else
			{
				printf("  ");
			}
			if(j != BYTES_PER_LINE - 1)
			{
				printf(" ");
			}
		}
		printf("\t\t%s\n", buffer);
	}
	free(buffer);
}