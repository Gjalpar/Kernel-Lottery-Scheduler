#include <linux/unistd.h>
#include <errno.h>
extern int errno;
extern int schedule_flag;

_syscall1(int, change_schedule_flag, int, flag);


