int strlen(char *a)
{
	for (i = 0; a[i] != 0; i++) ; return i;
}

void strcpy(char *a, char *b)
{
	for (i = 0; (a[i] = b[i]) != 0; i++) ;
}
