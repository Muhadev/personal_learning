#!/bin/bash


DATE=`date`
echo "Date is $DATE"

USERS=`who | wc -l`
echo "LOgged in user are $USERS"

UP=`date;uptime`
echo "Uptime is $UP"
