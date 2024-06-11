#include <stdio.h>


int main (int argc, char ** argv){

	int uid = atoi(argv[1]);
	
	setuid(uid);

	int i = 0;

	while (1) {

		i = (i+1) % 1000;
	}

	return 0;
}

