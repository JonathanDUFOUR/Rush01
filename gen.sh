#!/bin/bash

SIZE=$1

gen4() {

	for col_up_0 in $(seq 4) ; do
	for col_up_1 in $(seq 4) ; do
	for col_up_2 in $(seq 4) ; do
	for col_up_3 in $(seq 4) ; do
		for col_down_0 in $(seq 4) ; do
		for col_down_1 in $(seq 4) ; do
		for col_down_2 in $(seq 4) ; do
		for col_down_3 in $(seq 4) ; do
			for row_left_0 in $(seq 4) ; do
			for row_left_1 in $(seq 4) ; do
			for row_left_2 in $(seq 4) ; do
			for row_left_3 in $(seq 4) ; do
				for row_right_0 in $(seq 4) ; do
				for row_right_1 in $(seq 4) ; do
				for row_right_2 in $(seq 4) ; do
				for row_right_3 in $(seq 4) ; do
					echo "$col_up_0 $col_up_1 $col_up_2 $col_up_3 $col_down_0 $col_down_1 $col_down_2 $col_down_3 $row_left_0 $row_left_1 $row_left_2 $row_left_3 $row_right_0 $row_right_1 $row_right_2 $row_right_3"
				done
				done
				done
				done
			done
			done
			done
			done
		done
		done
		done
		done
	done
	done
	done
	done
}

if [[ $SIZE -eq "4" ]] ; then
	gen4
fi

exit 0