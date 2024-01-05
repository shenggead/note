#include "stdio.h"

int main() {

 char file_path[100],UID[9] = {"12345678"};
    sprintf(file_path, "A:\\\\code\\\\c++\\\\pupil_test2\\\\%s.txt", UID);
    printf("%s",file_path);
    return 0;
}

