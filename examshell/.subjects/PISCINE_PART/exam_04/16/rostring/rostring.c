#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;
	char	w[200];
	int	j;

	if (ac == 2)
	{
		i = 0;
		while (ag[1][i] == ' ' || ag[1][i] == '\t')
			i++;
		j = 0;
		while (ag[1][i] != ' ' && ag[1][i] != '\t')
		{
			w[j] = ag[1][i];
			j++;
			i++;
		}
		while (ag[1][i])
		{
			while (ag[1][i] == ' ' || ag[1][i] == '\t')
				i++;
			while (ag[1][i] != ' ' && ag[1][i] != '\t' && ag[1][i])
			{
				write (1, &ag[1][i], 1);
				i++;
			}
			if (!(ag[1][i - 1] == ' '))
				write (1, " ", 1);
		}
		j = 0;
		while (w[j])
		{
			write (1, &w[j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
}
