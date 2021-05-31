#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <signal.h>

pid_t pfork()
{
	return syscall(440);
}

long pfork_who()
{
	return syscall(441);
}

pid_t get_pfork_sibling_pid()
{
	return syscall(442);
}
long get_pfork_status()
{
	return syscall(443);
}
long set_pfork_status(int stat)
{
	 syscall(444, stat);
}
