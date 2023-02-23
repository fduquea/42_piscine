# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    add_chelou.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/06 18:13:56 by fduque-a          #+#    #+#              #
#    Updated: 2023/02/07 18:10:41 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!bin/sh

echo $FT_NBR1 + $FT_NBR2 | tr "'"'\\"?!mrdoc' '0123401234' | xargs -I{} echo 'ibase=5;obase=23;'{} | bc | tr '0123456789ABC' 'gtaio luSnemf'


#echo $FT_NBR1 + $FT_NBR2 | sed "s/\'/0/g" | tr '\\\"\?\!' 1234 | tr 'mrdoc' 01234 | xargs echo 'obase=13; ibase=5;' | bc | tr 0123456789ABC 'gtaio luSnemf'

#echo $FT_NBR1 + $FT_NBR2 cria a expressao usando variaveis
#tr "\'\\\\\"\?" "01234" traduz o primeiro input para numeros
#tr "mrdoc" "01234" traduz o alfabeto para numeros
#xargs echo "ibase=5; obase=23;" acrescenta informações de base numérica; a base de entrada é 5 e a base de saída é 13, mas obase deve ser expresso na base de ibase e 13 na base 5 é 23.
#tr "0123456789ABC" "gtaio luSnemf" traduz para o output pedido
