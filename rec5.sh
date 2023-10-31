#!/bin/bash
#aih0013

curve(){
	incr=$1
	shift
	arr=("$@")
	index=0
 for i in "${arr[@]}"; do
	grades[$index]=$((i+$incr))
	((index++))
 done

}

if [$# != 1]; then
    echo "Curve amount should be passed in as a command-line argument" 
else
	declare -a grades
 	for i in {1..5}; do
		read -p "Enter grade for quiz #$i:" grades[$i-1]
	done
	curve $1 "${grades[@]}"
	echo "Curved Grades:"
	#Loop throigh array 
	for((i=1;i<=5;i++));do
  echo "grades[$i] = ${grades[$i-1]}"
	done
fi
