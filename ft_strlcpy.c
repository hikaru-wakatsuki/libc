/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 06:41:50 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/16 08:06:44 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
     size_t    i;
     size_t    src_len;

     src_len = ft_strlen(src);
     i = 0;
     if (size != 0)
     {
          while (i < size - 1 && src[i])
          {
               dest[i] = src[i];
               i++;
          }
          dest[i] = '\0';
     }
     return(src_len);
}

#include <stdio.h>

int  main()
{
     char dest[] = "Hello";
     char src[] = "12345";

     printf("%ld\n", ft_strlcpy(dest, src, 5));
     printf("%s\n", dest);

}
