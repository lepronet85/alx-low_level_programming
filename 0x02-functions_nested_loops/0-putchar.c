#include <unistd.h>

/**
 * main - Main function of the program
 * Description: This function prints the message "_putchar",
 * followed by a newline.
 * Return: 0 if the program runs successfully, otherwise a different value.
 */

int main(void)
{

	char message[] = "_putchar\n";
	size_t messageSize = sizeof(message);

	write(1, message, messageSize);

	return (0);
}
