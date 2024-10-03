#include <sys/errno.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

extern size_t ft_strlen(const char *s);
extern char *ft_strcpy(char * dst, const char * src); 
extern int ft_strcmp(const char *s1, const char *s2);
extern ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
extern ssize_t ft_read(int fildes, void *buf, size_t nbyte);
extern char *ft_strdup(const char *s1);


int main(void)
{
	char *comp = "1234567890\n";
	char buf[21];
  char *copy = malloc(21);
	int len = -1;
	int ret = 1000;
  bzero(buf, 21);
  bzero(copy, 21);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
	printf("ft_read test: enter a string (max 20 characters)\n");
	ret = ft_read(0, buf, 20);
	printf("you've entered [%s] ret was %d\n", buf, ret);
	ret = ft_read(-1,"test", 4);
	printf("ft_read test\nret is %d and errno is %d\n", ret, errno);
	ret = read(-1,"test", 4);
	printf("read test\nret is %d and errno is %d\n", ret, errno);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
	len = ft_strlen(buf);
	printf("ft_strlen test\nlen = %d\n", len);
	len = strlen(buf);
	printf("strlen test\nlen = %d\n", len);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
	ret = ft_strcmp(buf, comp);
	printf("ft_strcmp test\nret is %d when comp with %s\n", ret, comp);
	ret = strcmp(buf, comp);
	printf("strcmp test\nret is %d when comp with %s\n", ret, comp);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
	char *rt = ft_strcpy(copy, buf);
	printf("ft_strcpy test\ncopy is [%s] return was %p\n", copy, rt);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
	copy = ft_strdup("XXXXXXXXXXXXXXXXXXXXXXXXXX");
	printf("ft_strdup test\ncopy is [%s] address was %p\n", copy, copy);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
	printf("ft_write test\n");
	ft_write(1, copy, ft_strlen(copy));
	ft_write(1, "\n", 1);
	ft_write(1, buf, ft_strlen(buf));
	ret = ft_write(-1,"test", 4);
	printf("ft_write test\nret is %d and errno is %d\n", ret, errno);
	ret = write(-1,"test", 4);
	printf("write test\nret is %d and errno is %d\n", ret, errno);
	printf("\n||||||||||||||||||||||||||||||||||||\n");
}
