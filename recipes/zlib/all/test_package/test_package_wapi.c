/* Exercises the WINAPI/stdcall variant (zlibwapi.dll).
   ZLIB_WINAPI must be defined before <zlib.h> so the function declarations use
   the same (stdcall) calling convention the zlibwapi library was built with. */
#define ZLIB_WINAPI
#include <stdio.h>
#include <stdlib.h>

#include <zlib.h>

int main(void) {
    printf("ZLIBWAPI VERSION: %s\n", zlibVersion());
    return EXIT_SUCCESS;
}
