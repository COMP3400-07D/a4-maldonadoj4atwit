#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

// TODO: Include more header files (read the manpages to find out more!)

int main(int argc, const char* argv[]) {
    if ( argc == 1 ) {
        printf( "ERROR: No arguments\n" ) ;
        return 1 ;
    }

    for ( int i = 1 ; i < argc ; i++ ) {
        const char* arg = argv[ i ] ;
        for ( int j = 0 ; argv[ i ][ j ] != '\0' ; j++ ) {
            printf( "%c", toupper( argv[ i ][ j ] ) ) ;
        }
        
        if ( i < argc - 1 ) {
            printf( "," ) ;
        }
    }

    printf( "\n" ) ;
    return 0 ;
}
