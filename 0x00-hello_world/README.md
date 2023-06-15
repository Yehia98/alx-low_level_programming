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

/**
 * main - printing a line using printf
 * return 0 to (success)
 */

int main(void)
{       
        printf("with proper grammer, but the outcome is a piece of art,\n");
        return(0);
}  
