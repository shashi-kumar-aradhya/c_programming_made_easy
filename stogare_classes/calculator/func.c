#include <stdio.h>

#define BUFSIZE 100
#define NUMBER 	'0'
char buf[BUFSIZE];
int bufp = 0;

int s_getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void s_ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch too many characters\n");
	else
		buf[bufp++] = c;
}

int s_isdigit(int c)
{
	return ((c >= '0' && (c <= '9'))) ? c : 0;  
}

int getop(char s[])
{
	int i, c;
	while ((s[0] = c = s_getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!s_isdigit(c) && c != '.')
		return c;
	i = 0;
	if (s_isdigit(c))
		while (s_isdigit(s[++i] = c = s_getch()))
			;

	if (c =='.')
		while (s_isdigit(s[++i] = c = s_getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		s_ungetch(c);
	return NUMBER;
}
