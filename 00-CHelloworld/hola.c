
#include <stdio.h>

int main(){

    printf("Hola Mundo");
    FILE *logfile = fopen("output.txt", "w");
    fprintf(logfile, "Hola Mundo");
    fclose(logfile);
    return 0;
}
