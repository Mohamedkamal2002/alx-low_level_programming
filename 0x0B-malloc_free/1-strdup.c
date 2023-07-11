#include "stdlib.h"
char *_strdup(char *str)
{
	char *str_cp;
	int i,l;

	if (str == NULL)
		return (NULL);
	i = 1;
	while(str[i]!= '\0')
		i++;
	for (l = 0 ; l <= i ; l++)
		str_cp[l] = str[l];
	if(str_cp == NULL)
		return (NULL);
	strcpy(str_cp,str);
	return (str_cp);
}
