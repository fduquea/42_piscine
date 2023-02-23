# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 17:26:49 by fduque-a          #+#    #+#              #
#    Updated: 2023/02/06 18:09:36 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

cat /etc/passwd | grep -v "#" | sed -n 'n;p' | cut -f 1 -d : | rev | sort -r | sed -n $FT_LINE1,${FT_LINE2}p | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'

#grep -v "#" | nao mostra comentarios
#sed -n 'n;p' | mostra linha sim linha nao
#cut -f 1 -d : | apaga o que esta a frente de ":" incluindo ":"
#rev | reverse os characters da linha
#sort -r | sort organiza por ordem alfabetica, -r faz o inverso (z-a)
#sed -n  $FT_LINE1,${FT_LINE2}p | apenas linha1 a linha2
#tr '\n' ',' | substitui a quebra de linha por uma virgula
#sed 's/,/, /g' | substitui todas as virgulas por virgula + espaco
#sed 's/, $/./' | substitui a ultima virgula + espaco por ponto (.)
#tr -d '\n' | apaga a quebra de linha
