#!/bin/bash

SOUND_FILE="extras/swtheme.wav"
PID_FILE2="pid2.txt"

if command -v aplay > /dev/null 2>&1; then
    aplay "$SOUND_FILE" &
    echo $! > "$PID_FILE2"
elif command -v paplay > /dev/null 2>&1; then
    paplay "$SOUND_FILE" &
    echo $! > "$PID_FILE2"
elif command -v afplay > /dev/null 2>&1; then
    afplay "$SOUND_FILE" &
    echo $! > "$PID_FILE2"
else
    echo "No suitable audio player found."
fi