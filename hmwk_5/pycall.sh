#!/bin/bash

dir_size=`du -s | cut -f1`

python folder_size.py $dir_size
