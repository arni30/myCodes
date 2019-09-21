
char *mx_strstr(const char *s1, const char *s2);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2)
{
	int l = mx_strlen(s1);
	for (int i = 0; i < l - 1; i++)
	{
		if(mx_strchr(s1, *s2) == 0) return 0;
		else
		{
			if (mx_strncmp(s1, s2, k)) return (char *)s2;
		}
		s1++;
		s2++;
	}
	return 0;
}