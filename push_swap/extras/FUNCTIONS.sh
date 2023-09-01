#!/bin/bash


function write_yellow() {
    local str="$1"
    local target="${2:-}"  # if no second argument given, target is an empty string
    local target_color="${3:-${YELLOW}}"  # if no third argument given, target_color is yellow
    local replacement="${target_color}${target}${YELLOW}"  # replace the target word with the specified color, then switch back to yellow
    str=${str//${target}/${replacement}}  # replace all instances of the target word in str

    ./extras/PLAY_WRITE.sh &  # Start PLAY_WRITE.sh in the background
    sleep 0.1  # Wait a moment to ensure the background process has started and PID has been written
    PID1=$(cat "pid.txt")  # Read the PID from the file

    echo -ne "${YELLOW}"  # set color to yellow at the start

    for (( i=0; i<${#str}; i++ )); do
        echo -ne "${str:i:1}"
        sleep 0.05
    done

    echo -ne "${NO_COLOR}"  # reset color at the end

    kill $PID1  # Kill the background process
    rm "pid.txt"  # Remove the PID file
}

function write_red() {
    local str="$1"
    local target="${2:-}"  # if no second argument given, target is an empty string
    local target_color="${3:-${RED}}"  # if no third argument given, target_color is yellow
    local replacement="${target_color}${target}${RED}"  # replace the target word with the specified color, then switch back to yellow
    str=${str//${target}/${replacement}}  # replace all instances of the target word in str

    ./extras/PLAY_WRITE.sh &  # Start PLAY_WRITE.sh in the background
    sleep 0.1  # Wait a moment to ensure the background process has started and PID has been written
    PID1=$(cat "pid.txt")  # Read the PID from the file

    echo -ne "${RED}"  # set color to yellow at the start

    for (( i=0; i<${#str}; i++ )); do
        echo -ne "${str:i:1}"
        sleep 0.05
    done

    echo -ne "${NO_COLOR}"  # reset color at the end

    kill $PID1  # Kill the background process
    rm "pid.txt"  # Remove the PID file
}

function write_blue() {
    local str="$1"
    local target="${2:-}"  # if no second argument given, target is an empty string
    local target_color="${3:-${BLUE}}"  # if no third argument given, target_color is yellow
    local replacement="${target_color}${target}${BLUE}"  # replace the target word with the specified color, then switch back to yellow
    str=${str//${target}/${replacement}}  # replace all instances of the target word in str

    ./extras/PLAY_WRITE.sh &  # Start PLAY_WRITE.sh in the background
    sleep 0.1  # Wait a moment to ensure the background process has started and PID has been written
    PID1=$(cat "pid.txt")  # Read the PID from the file

    echo -ne "${BLUE}"  # set color to yellow at the start

    for (( i=0; i<${#str}; i++ )); do
        echo -ne "${str:i:1}"
        sleep 0.05
    done

    echo -ne "${NO_COLOR}"  # reset color at the end

    kill $PID1  # Kill the background process
    rm "pid.txt"  # Remove the PID file
}