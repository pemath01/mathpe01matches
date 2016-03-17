#include <stdio.h>
#include "lookinFile.h"

int main(int argc, char* argv[]) {

  int k;

  if (argc <3) {
    printf("usage: mygrep pattern file1 file2 file3 ...");
  }

  char* pattern = argv[1];

  for (k=2;k<argc;k++)
    lookinFile(argv[k], pattern);

  return 0;
}
