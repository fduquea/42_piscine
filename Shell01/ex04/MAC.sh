# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 16:33:28 by fduque-a          #+#    #+#              #
#    Updated: 2023/02/06 17:05:06 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin.sh

ifconfig | grep 'ether' | awk '{print $2}'
#ifconfig gives network information
#"grep 'ether'" mostra as frases que contem 'ether'
#essas frases estao divididas em 4 seccoes
#"awk '{print $2}'" faz com que apenas a segunda seccao, neste caso endrecos mac, sejam mostradas
