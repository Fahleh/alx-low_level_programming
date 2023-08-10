gcc -E "$CFILE" -o c: Runs a C file through the preprocessor and save the result into another file.
gcc -c "$CFILE": Compiles a C file but does not link.
gcc -S "$CFILE": Generates the assembly code of a C code and save it in an output file.
gcc "$CFILE" -o cisfun: Compiles a C file and creates an executable named cisfun.
