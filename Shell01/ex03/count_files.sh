# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 16:28:50 by fduque-a          #+#    #+#              #
#    Updated: 2023/02/06 16:32:33 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/sh

find . -type f -o -type d | wc -l | sed 's/ //g'
#wc -l mostra o numero de pastas e ficheiros visto que "find . -type f -o -type d" mostra cada ficheiro e pasta numa linha
#sed substitui o ultimo espaco em branco por nada
#tr -d '\n' apaga quebras de linha
