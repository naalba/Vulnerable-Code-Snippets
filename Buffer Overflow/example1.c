int _tmain(int argc, _TCHAR* argv[])
{
	char name[64];
	printf("Enter your name: ");
	fgets("%63s", name);
	Sanitize(name);
	printf("Welcome, %s!", name);
	return 0;
} }
