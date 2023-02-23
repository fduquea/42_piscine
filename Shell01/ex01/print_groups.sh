#!bin/bash

id -Gn $FT_USER | sed 's/ /,/' | tr -d '\n'
#{sed 's/ /,/'} substitui espaco por virgulas
#{tr -d '\n'} apaga as mudancas de linha 
