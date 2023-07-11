#include "stdlib.h"
#include "string.h"
char *_strdup(char *str)
{
	char *str_cp;

	if (str == NULL)
		return (NULL);
	str_cp = malloc(sizeof(str));
	/*if(str_cp == NULL)
		return (NULL);*/
	strcpy(str_cp,str);
	return (str_cp);
}
