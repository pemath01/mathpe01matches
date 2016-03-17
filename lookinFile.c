#include "lookinFile.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lookinFile(char* filename, char* pattern) {

    char *buffer;
    size_t bufsize = 512;
    size_t characters;

    FILE* file = fopen(filename,"r");

    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL) {
        perror("Unable to allocate buffer");
        exit(1);
    }

    characters = getline(&buffer,&bufsize,file);
    
    while (characters!=-1) {
      // process the buffer
      if (strstr(buffer,pattern)) {
          printf("%s:%s",filename,buffer);
      }

      // get the next line hopefully
      characters = getline(&buffer,&bufsize,file);
    } 
}  
