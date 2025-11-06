#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

// TODO: Include more header files (read the manpages to find out more!)

int main(int argc, const char* argv[]) {
    if ( argc == 1 ) {
        printf( "ERROR: No arguments\n" ) ;
        return 1 ;
    }

    int count = argc - 1 ;

    if ( count == 1 ) {
        printf( "%s\n", argv[ 1 ] ) ;
        return 0 ;
    }

    if ( count % 2 == 0 ) {
        int mid1 = count / 2 ;
        int mid2 = mid1 + 1 ;
        printf( "%s %s\n", argv[ mid1 ], argv[ mid2 ] ) ;
    } 
    
    else {
        int mid = ( count / 2 ) + 1 ;
        printf( "%s\n", argv[ mid ] ) ;
    }

    return 0 ;
}
