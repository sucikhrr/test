#include <stdio.h>

int variabelGlobal=1;

int add(int);
int main()
{
	int a = 1;//variabel lokal
	int x = add(a);
	printf("%d\n", x );
	printf("%d\n",variabelGlobal);
	
	return 0;
}

int add (int nilai)
{
	return nilai+=1;
}
