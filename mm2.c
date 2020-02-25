#include<stdio.h>
#include<stdlib.h>
void mm(void);
static const char *SS =
		"P=j\n"
		"OBJECTS=\n"
		"CFLAGS = -g -Wall -O2 -include allhead.h `pkg-config --cflags glib-2.0`\n"
		"LDLIBS=`pkg-config --libs glib-2.0`\n"
		"cc=c99\n"
		"${P}:";
int main(int argc, char* argv[])
{
	char ch[MAX];
	char *p = ch;

	puts("please input a :");
	scanf("%s\n", p);
	if(p == "m")
		mm();
	return 0;
}
void mm(void)
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
