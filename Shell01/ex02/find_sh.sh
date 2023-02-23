# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 16:02:02 by fduque-a          #+#    #+#              #
#    Updated: 2023/02/06 16:21:04 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/sh

find . -name "*.sh" | sed 's:.*/::' | sed 's/\.[^.]*$//'
#o primeiro sed retira "./"
#o segundo sed retira as extensoes .sh
#"." any character
#"*" any number of times 
#"^" beggining of the string
#"$" end of the string
