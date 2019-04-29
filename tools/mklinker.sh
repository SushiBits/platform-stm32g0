#!/bin/bash

while read name rom ram junk; do
	RAMBASE=0x20000000
	cat > $name.ld << EOF
MEMORY
{
    IROM	(r x) : ORIGIN = 0x08000000, LENGTH = ${rom}k
    IRAM    (rwx) : ORIGIN = ${RAMBASE}, LENGTH = ${ram}k
}

INCLUDE $1
EOF
done
