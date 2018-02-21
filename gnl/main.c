#include "get_next_line.h"

int		main(void)
{
	char	*line;
	int i;

	i = 10;
	while (i)
	if (get_next_line(0, &line) > 0)
	{
		printf("|%s|\n", line);
		free(line);
		i--;
	}
	return (0);
}
