#!/bin/bash

SOUND_FILE="extras/digityping.wav"
PID_FILE="pid.txt"

if command -v aplay > /dev/null 2>&1; then
    aplay "$SOUND_FILE" &
    echo $! > "$PID_FILE"
elif command -v paplay > /dev/null 2>&1; then
    paplay "$SOUND_FILE" &
    echo $! > "$PID_FILE"
elif command -v afplay > /dev/null 2>&1; then
    afplay "$SOUND_FILE" &
    echo $! > "$PID_FILE"
else
    echo "No suitable audio player found."
fi