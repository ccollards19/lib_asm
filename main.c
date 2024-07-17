#include <stdio.h>
#include <string.h>

extern size_t ft_strlen(const char *s);
// extern char *ft_strcpy(char * dst, const char * src); 
// extern int ft_strcmp(const char *s1, const char *s2);
// extern ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
// extern ssize_t ft_read(int fildes, void *buf, size_t nbyte);
// extern char *ft_strdup(const char *s1);


int main(int argc, char **argv)
{
	char *comp = "test";
	char buf[21];
	char *copy;
	int len = -1;
	int ret = 1000;
	// printf("ft_read test\n|||||||||||||||||||||||||||||||\nenter a string (max 20 characters)\n");
	// ret = ft_read(0, buf, 20);
	// buf[20] = 0;
	// printf("you've entered [%s] ret was %d\n||||||||||||||||||||||||||||||\n", buf, ret);
	len = ft_strlen(comp);
	printf("ft_strlen test\nlen = %d\n||||||||||||||||||||||||||||||\n", len);
	len = strlen(comp);
	printf("strlen test\nlen = %d\n||||||||||||||||||||||||||||||\n", len);
	// ret = ft_strcmp(buf, comp);
	// printf("ft_strcmp test\n ret is %d when comp with %s\n|||||||||||||||||||||||||||\n", ret, comp);
	// copy = ft_strdup(buf);
	// printf("ft_strdup test\ncopy is [%s] address was %p\n||||||||||||||||||||||||||||||\n", copy, copy);
	// char *rt = ft_strcpy(copy, comp);
	// printf("ft_strcpy test\ncopy is [%s] return was %p\n||||||||||||||||||||||||||||||\n", copy, rt);
	// printf("ft_write test\n");
	// ft_write(1, copy, ft_strlen(copy));
	// ft_write(1, "\n", 1);
	// ft_write(1, buf, ft_strlen(buf));
}
