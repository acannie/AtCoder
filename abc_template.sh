#!/bin/bash

echo "Input contest number of abc."
read contest_number

./templatemaker << !
abc
abc$contest_number
6
!
exit 0