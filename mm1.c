@ Here xxx
@c
int main(void)
{
	/**123*/
	string const SS =
		"P=j\n"
		"OBJECTS=\n"
		"CFLAGS = -g -Wall -O2 -std=gnu11 -include allhead.h \n"
		"LDLIBS=\n"
		"cc=gcc\n"
		"${P}:";

	f_print("Makefile", SS);
}
