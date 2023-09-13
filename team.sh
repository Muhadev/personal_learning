#!/bin/bash

PS3="Please make a selection => "
select faith in tea coffee water soap marriage sex all none
do
	case $faith in
		tea|coffee|water|all)
			echo "Go to the kitchen"
			;;
		soap|marriage|sex)
			echo "Come to my house"
			exit 0
			;;
		none)
			break
			;;
		*)
			echo "ERROR: invalid selection"
			;;
	esac
done
