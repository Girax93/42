#!/bin/bash

# Define the sound file
SOUND_FILE="extras/winxp.wav"

# Check for 'aplay' (often default on ubuntu)
if command -v aplay > /dev/null 2>&1; then
    aplay "$SOUND_FILE"
# Check for 'paplay' (often default on Arch)
elif command -v paplay > /dev/null 2>&1; then
    paplay "$SOUND_FILE"
# Check for 'afplay' (default macOS audio player)
elif command -v afplay > /dev/null 2>&1; then
    afplay "$SOUND_FILE"
else
    echo "No suitable audio player found."
fi



# SHELL_USED=$(echo $$0)
#
# if [[ "$(uname)" == "Darwin" ]]; then
#     afplay extras/winxp.wav &> /dev/null
# elif [ "$SHELL_USED" = "zsh" ]; then
#     aplay extras/winxp.wav &> /dev/null
# else
#     paplay extras/winxp.wav &> /dev/null
# fi