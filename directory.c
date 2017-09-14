#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

main()
{
	struct stat st = {0};
	if (stat("temp", &st) == -1) 
    		mkdir("temp", 0700);

	
}
