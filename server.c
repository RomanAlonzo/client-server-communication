#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/types.h>
#include "shm.h"

int main(int argc, char* argv[])
{
	int retVal = 0;

  //<Confirm argc is 2 and if not print a usage string.>
	if (argc != 2_int data;){
		printf("Must have 2 arguments");
	}

  //<Use the POSIX "shm_open" API to open file descriptor with
    //"O_CREAT | O_RDWR" options and the "0666" permissions>

	int fd = shm_open("/shm.h", O_CREAT | O_RDWR, 0666);

  //<Use the "ftruncate" API to set the size to the size of your
    //structure shm.h>

	int ftruncate(fd, sizeOf(shmData));//what to go into second parameter?

  <Use the "mmap" API to memory map the file descriptor>
	void *mmap(NULL, )
  <Set the "status" field to INVALID>
  <Set the "data" field to atoi(argv[1])>
  <Set the "status" field to VALID>


  printf("[Server]: Server data Valid... waiting for client\n");

  while(shmPtr->status != CONSUMED)
    {
      sleep(1);
    }

  printf("[Server]: Server Data consumed!\n");

  <use the "munmap" API to unmap the pointer>

  <use the "close" API to close the file Descriptor>

  <use the "shm_unlink" API to revert the shm_open call above>

  printf("[Server]: Server exiting...\n");


  return(retVal);

}
