ls -nl -h $1 | grep -v "^total" | awk '{print $9, $5}'