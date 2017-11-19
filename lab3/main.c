#include <stdio.h>
#include "loadscripts.h"
#include "global.h"
#include "scripts.h"
#include "readfile.h"


int main() {
    int size;
    SCRIPT_T all_scripts[ARR_SIZE];

    if ((size = loadscripts(FILE_PATH, &all_scripts)) <= 0){
      printf("Error: Please check the file \"%s\"!\n", FILE_PATH);
      return 1;
    }

    //print_all_scripts(all_scripts, size);

    int *count = initialize_count(size);
    read_and_count(all_scripts, count, size);
    print_max_count(all_scripts, count, size);




    return 0;
}
