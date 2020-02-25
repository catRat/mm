#include<stdio.h>
#include<stdlib.h>
#define SS "P=j\n\
	OBJECTS=\n\
	CFLAGS = -g -Wall -O2 -include allhead.h `pkg-config --cflags glib-2.0`\n\
	LDLIBS=`pkg-config --libs glib-2.0`\n\
	cc=c99\n\
	${P}:"
#define TIP "Usage: mm"
void mm(void);
int main(int argc, char* argv[])
{

	if(argc != 2)
	{
		puts("unfind argument.");
		exit(1);
	}
	if( strcmp(argv[1], "m") == 0)
		mm();
	return 0;
}
void mm(void)
{
	FILE *fp;

	if ((fp = fopen("Makefil", "w")) == NULL)
	{
		fprintf(stdout, "Can't open \"Makefile\"\n");
		exit(1);
	}
	fprintf(fp, "%s\n", SS);
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	printf("done.\n");

}
void check_argc(int n)
{
	if(n != 2)
	{
		puts();
		exit(1);
	}
}
