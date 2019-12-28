#!/bin/bash

echo "Input contest number of agc."
read contest_number

BASEDIR=$(dirname "$0")
$BASEDIR/templatemaker << !
agc
agc$contest_number
6
!
exit 0