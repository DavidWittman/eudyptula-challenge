#include <assert.h>
#include <stdio.h>
#include <unistd.h>

#define EUDYPTULA_SYSCALL 320

int main(int argc, char *argv[])
{
	int rc = 0;

	printf(">> sys_eudyptula(0x01, 0x01)\n");
	rc = syscall(EUDYPTULA_SYSCALL, 0x01, 0x01);
	printf("Return code: %d\n", rc);
	assert(rc != 0);

	printf(">> sys_eudyptula(0x5d65, 0x8d788cc9)\n");
	rc = syscall(EUDYPTULA_SYSCALL, 0x5d65, 0x8d788cc9);
	printf("Return code: %d\n", rc);
	assert(rc == 0);

	return 0;
}
