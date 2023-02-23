#!/bin/sh

git log -n5 --format="%H"

#git log = obter commits
# -n5 = mostrar apenas os ultimos 5 commits
# --format="%H" = apenas mostra o que eu pedi, no caso "H" significa a hash
