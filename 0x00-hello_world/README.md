gcc -E $CFILE -o c
gcc -c $CFILE
gcc -S $CFILE
gcc $CFILE -o cisfun

/**
* main - A program that prints a line using puts function.
* Return: should be 0 (success)
*/
int main (void)
{
        puts("\"programming is like building a multilingual puzzle");
        return(0);
}

