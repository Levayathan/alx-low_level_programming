#!/bin/bash
wget -P /tmp https://github.com/Levayathan/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
