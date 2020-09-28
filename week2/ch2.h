#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include <sys/utsname.h>
#include <rpc/types.h>
#include <errno.h>
#define err_exit(MESSAGE) (             \
	perror(MESSAGE),                 \
	exit(1)                           \
)

