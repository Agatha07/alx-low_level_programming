int append_text_to_file(const char *filename, char *text_content)
{
	int length, fd, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
