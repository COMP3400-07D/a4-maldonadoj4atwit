#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

// TODO: Include more header files (read the manpages to find out more!)

int main(int argc, const char* argv[]) {
      if ( argc == 1 ) {
        printf( "ERROR: No arguments\n" ) ;
        return 1 ;
    }

    if ( argc != 3 ) {
        return 1 ;  
    }

    const char* word = argv[ 1 ] ;
    const char* filename = argv[ 2 ] ;
    
    FILE* file = fopen( filename, "r" ) ;
    if ( file == NULL ) {
        printf( "ERROR: %s doesn't exist\n", filename ) ;
        return 2 ;
    }
    
    char line[ 1024 ] ;
    bool found = false ;
    
    while ( fgets( line, sizeof( line ), file ) != NULL ) {
        size_t len = strlen( line ) ;
        if ( len > 0 && line[ len-1 ] == '\n' ) {
            line[ len-1 ] = '\0' ;
        }
        if ( strstr( line, word ) != NULL ) {
            found = true ;
            break ;
        }
    }

    fclose( file ) ;
    
    if ( found ) {
        printf( "FOUND: %s\n", word ) ;
    } 
    
    else {
        printf( "NOT FOUND: %s\n", word ) ;
    }

    return 0 ;
}
