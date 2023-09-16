#!/bin/bash

var="Click to ask me out"
echo "${var:?"You cannot handle me"}"
unset var
echo "${var:?"You cannot handle me"}"
