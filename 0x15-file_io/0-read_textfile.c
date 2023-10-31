#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile -  function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The filename
 * @letters: The letters
 * Return: The actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = (char *)malloc(letters);
	ssize_t bytesRead = fread(buffer, 1, letters, file);
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (filename == NULL)
		return (0);

	if (file == NULL)
		return (0);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	if (bytesRead <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	if (bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (bytesRead);
}
