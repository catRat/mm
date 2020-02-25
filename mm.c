#include"allhead.h"
#define SS "P=j\nOBJECTS=\nCFLAGS = -g -Wall -include allhead.h -std=gnu99 `pkg-config --cflags glib-2.0`\nLDLIBS=`pkg-config --libs glib-2.0`\ncc=gcc\n${P}:"
int main(void)
{
	FILE *fp;
	if ((fp = fopen("Makefile", "w")) == NULL)
	{
		fprintf(stdout, "Can't open \"Makefile\"\n");
		exit(1);
	}
	fprintf(fp, "%s\n", SS);
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	printf("done.\n");

}