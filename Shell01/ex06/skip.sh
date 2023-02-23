# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 17:19:21 by fduque-a          #+#    #+#              #
#    Updated: 2023/02/06 17:23:54 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/sh

ls -l | sed -n 'p;n'
#sed -n supressa o output que nao e pedido
#'p;n' print 1 a cada 2 linhas
#p printa a linha atual
#n passa para a proxima linha sem a printar
#depois de printar p, passa para n sem imprimir, depois repete passanda para a proxima linha e imprimindo-a
