#!/bin/bash



var="Monogamy is overrated"
echo "${var:=word}"
unset var
echo "${var:=word}"
echo "${var}"
