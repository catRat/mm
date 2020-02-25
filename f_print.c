void f_print(string fname, string data)
{
	FILE *fp;

	if((fp = fopen(fname, "w")) == NULL)
	{
		fprintf(stdout, "Can't open.\n");
		exit(1);
	}
	fprintf(fp, data);
	if(fclose(fp) != 0)
	{
		fprintf(stderr, "Error closing file\n");
		exit(1);
	}
	printf("done.\n");
}
