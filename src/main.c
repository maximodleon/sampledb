#include <stdio.h>
#include <stdbool.h>
#include <getopt.h>

void print_usage(char *argv[]) {
  printf("Usage: %s -n -f <database_file>\n", argv[0]);
  printf("\t -n create a new database file\n");
  printf("\t -f (required) path to database file\n");
}

int main(int argc, char *argv[]) {
  char *filepath = NULL;
  bool newfile;
  int c;

  while((c = getopt(argc, argv, "nf:")) != -1) {
    switch (c) {
      case 'n':
        newfile = true;
        break;
      case 'f':
        filepath = optarg;
        break;
      case '?':
        printf("unknown option -%c\n", c);
        break;
      default:
        return -1;
    }
  }

  if (filepath == NULL) {
    printf("filepath is a required argument\n");
    print_usage(argv);
    return 0;
  }

  printf("Newfile: %d\n", newfile);
  printf("Filepath: %s\n", filepath);
  return 0;
}
