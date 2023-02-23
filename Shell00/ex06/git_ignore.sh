#!/bin/sh

git ls-files --others --ignored --exclude-standard

# git ls-files = mostra uma lista dos ficheiros dentro do repositorio
# --others = mostra ficheiros que nao estao a ser rastreados pelo repositorio
# --ignored = mostra os ficheiros ignorados (precisa de algo)
# --exclude-standard = exclui os ficheiros padrao da lista final (.gitignore; .git)

# git ls-files --ignores --exclude-standard = nao mostra nada porque primeiro 
#mostra todos os ficheiros a ser rastreados, depois esses ficheiros sao ignorados (--ignored)
#entao apenas os ficheiros padrao seriam mostrados, porem eles sao excluidos com --exclude-standard

#standard files = these files help ensure that anyone that is working with the repository has a good experience and technical issues are avoided.