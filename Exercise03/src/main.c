#include <stdio.h>
#include "record.h"

// file ej6-escribirregAccDirecto.c
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "record.h"

const int NUMBER_RECORDS = 5;
char FILE_NAME[40]="records.dat";

int main(int argc, char **argv)

{
	TypeRecord record;

	for(int i = 1; i < NUMBER_RECORDS+1; i++) {
        record.code = i;
        snprintf(record.name, 30, "%s_%04d", "Client", i + 1);
		writeFile(FILE_NAME,record);
    }
	
	readFile(FILE_NAME);
	
    

}

