#include <stdio.h>
void pre_main(void)__attribute__((constructor));
/**
 * pre_main - executes before the main functions gets executed
 */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
