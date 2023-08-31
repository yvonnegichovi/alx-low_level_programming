#!/bin/bash

# Get self
echo -e
echo -e "Fetching script.c file ..."
echo -e

curl https://raw.githubusercontent.com/yvonnegichovi/alx-low_level_programming/master/0x14-bit_manipulation/password_generate.c -o passwordxt.c

sed -i 's/"pass.h"/<stdio.h>/g' passwordxt.c
sed -i '2i #include <stdlib.h>' passwordxt.c

# To generate password document

gcc passwordxt.c -o pass.xt

#To generate password document

./pass.xt

echo -e
echo -e "Cleanup ..."

rm *.xt passwordxt.c

#clear

echo -e "Created 101-password successfully"
ls 101-password

echo -e
echo -e "Run ./crackme \`cat 101-password\` to verify"
echo -e
