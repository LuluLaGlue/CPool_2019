#!/bin/sh
cat Day02/passwd | cut -d ":" -f 1 | sed -n '0~2p' | rev | sort | tac | awk '{if(NR>=$FT_LINE1 && NR<=$FT_LINE2)print}' | tr \\n ', ' | sed 's/,/, /g' | sed '$s/,.$/\.\n/'
