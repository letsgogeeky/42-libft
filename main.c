/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramoussa <ramoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:48:24 by ramoussa          #+#    #+#             */
/*   Updated: 2023/03/22 11:11:03 by ramoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	// test ft_isdigit
	printf("IS DIGIT: %d\n", ft_isdigit(5));
	printf("%d", ft_isalpha('D'));

	// test ft_isalnum
	printf("IS ALPHA NUMERIC: %d\n", ft_isalnum(70));

	// test ft_isascii
	printf("IS ASCII : %d\n", ft_isascii(23));
	printf("NOT ASCII: %d\n", ft_isascii(300));

	// test ft_strlen
	printf("STRING SIZE: %d\n", ft_strlen("hello world!"));

	// test ft_toupper
	printf("a to upper is: %c\n", ft_toupper('a'));

	// test ft_tolower
	printf("A to lower is: %c\n", ft_tolower('A'));

	// test ft_strchrc
	printf("Current char is: %c\n", *ft_strchr("abcdef", 'z'));
	printf("Current char is: %c\n", *ft_strchr("abcdef", 'c'));

	// test ft_strrchr
	char	*result = ft_strrchr("abcdefeed", 'e');
	result++;
	printf("Current char is: %c\n", *result);

	// test ft_strncmp
	printf("Compare result: %d\n", ft_strncmp("abcdef", "abcdef", 4));
	printf("Compare result: %d\n", ft_strncmp("abcdef", "abc", 4));
	printf("Compare result: %d\n", ft_strncmp("abf", "abzds", 4));
	return (0);
}
