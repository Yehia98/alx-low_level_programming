gcc -E $CFILE -o c
gcc -c $CFILE
gcc -S $CFILE
gcc $CFILE -o cisfun

/**
* main - A program that prints a line using puts function.
* Return: 0 (success)
*/
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}

/**
 * main - printing a line using printf
 * return 0 to (success)
 */

int main(void)
{
        printf("with proper grammer, but the outcome is a piece of art,\n");
        return (0);
}

/**
* main - program that prints the size of various types on the computer it is comp*iled and run on
*
* Return: Always 0 (Success)
*/
int main(void)
{
        printf("Size of a char: %d byte(s)\n", sizeof(char));
        printf("Size of an int: %d byte(s)\n", sizeof(int));
        printf("Size of a long int: %d byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
        printf("Size of a float: %d byte(s)\n", sizeof(float));
        return (0);
}
