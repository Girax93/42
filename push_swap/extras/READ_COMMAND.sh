#!/bin/bash

if [ "$SHELL" = "/bin/zsh" ]; then
    zsh -c "read -s -k '? '"
else
    read -n1 -r
fi
