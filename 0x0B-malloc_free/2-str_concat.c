#include "stdlib.h"
#include "string.h"
char *str_concat(char *s1, char *s2)
{
	char *s_con;
	int i;

	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s_con = malloc(strlen(s1)+strlen(s2)+1);
	for (i = 0 ; i <= strlen(s1) ; i++)
	{
		s_con[i] = s1[i];
		i++;
	}
	for (i = 0 ; i <= strlen(s2) ; i++)
	{
		s_con[i] = s2[i];
		i++;
	}
	s_con[strlen(s1)+strlen(s1)+1] = '\0';
	return (s_con);

}
