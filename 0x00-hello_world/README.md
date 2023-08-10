gcc -E "$CFILE" -o c: Runs a C file through the preprocessor and save the result into another file.
gcc -c "$CFILE": Compiles a C file but does not link.
gcc -S "$CFILE": Generates the assembly code of a C code and save it in an output file.
gcc "$CFILE" -o cisfun: Compiles a C file and creates an executable named cisfun.

int main(void)
{       
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
The code above is a C program that prints exactly "Programming is like building a multilingual puzzle  
