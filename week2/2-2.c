#include"ch2.h"
int main()
{
	int ret;
	printf("2-2 is runing");
	ret=write(1,"hello world!\n",13);
	sleep(2000);
	exit(0);
}
