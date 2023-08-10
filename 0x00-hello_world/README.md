gcc -E "$CFILE" -o c: Runs a C file through the preprocessor and save the result into another file.
gcc -c "$CFILE": Compiles a C file but does not link.
gcc -S "$CFILE": Generates the assembly code of a C code and save it in an output file.
gcc "$CFILE" -o cisfun: Compiles a C file and creates an executable named cisfun.

int main(void)
{       
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
The code above is a C program that prints exactly "Programming is like building a multilingual puzzle.


int main(void)
{       
        printf("with proper grammar, but the outcome is a piece of art,\n");
        return (0);
}  
The code above is a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.


int main(void)
{
        printf("Size of a int: %lu byte(s)\n", sizeof(int));
        printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %lu byte(s)\n", sizeof(float));
        printf("Size of a char: %lu byte(s)\n", sizeof(char));
        return (0);
} 

The code above is a C program that prints the size of various types on the computer it is compiled and run on.  
