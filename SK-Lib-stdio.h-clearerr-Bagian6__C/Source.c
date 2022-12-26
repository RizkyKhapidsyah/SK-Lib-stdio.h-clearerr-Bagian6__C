#pragma warning(disable:4996)

#include <stdio.h>
#include <assert.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    FILE* tmpf = tmpfile();
    fputs("Halo Manusia\n", tmpf);
    rewind(tmpf);

    for (int ch; (ch = fgetc(tmpf)) != EOF; putchar(ch)) {}

    assert(feof(tmpf)); 
    puts("End of file reached");

    clearerr(tmpf); 

    puts(feof(tmpf) ? "EOF indicator set"
        : "EOF indicator cleared");

    _getch();
    return 0;
}