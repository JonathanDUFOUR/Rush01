#!/bin/bash

EXEC="./rush-01"
VALID_ARG_FILE="valid"
INVALID_ARG_FILE="invalid"

make $EXEC

while read VALID_ARG ; do
	echo "$EXEC \"$VALID_ARG\""
	$EXEC "$VALID_ARG"
	echo ""
done < $VALID_ARG_FILE

exit 0
