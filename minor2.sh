#!/bin/bash
#Abel Hernandez
#aih0013
#Create a function to track of initial users
#Function to capture signal
function interrupt() {
echo "^C (SIGINT) ignored. enter ^C 1 more time to terminate program."
echo "Exiting now"
exit
}
trap interrupt SIGINT

function initialUsers {
who | awk '{printf"> %s logged in to '$(hostname)'\n", $1}' 

}
#Create a function to track user count
function countUsers {
 echo "$(date) # of users: $(who|wc -l)"
}
#Function to monitor logouts
function logoutChecker {
previousCheck = $(who)
currentCheck = $(who)
#Check if there are any changes
while  previousCheck; do
	if [previousCheck != currentCheck]; then
		echo "Someone has logged outt"
	fi
	done
}
#Show welcome msg
echo "$(date) initial users logged in"
initialUsers
while true
do
#output number of users
 countUsers
#Sleep for 10 seconds then continue  
 sleep 10
done
