#!/bin/bash
source extras/colours.sh
source extras/FUNCTIONS.sh

echo -e " "
echo -e "${YELLOW}              _                        This is a keyboard.        ${NO_COLOR}"
echo -e "${YELLOW}             | |                             |           	        ${NO_COLOR}"
echo -e "${YELLOW}             | |===( )   //////              |                    ${NO_COLOR}"
echo -e "${YELLOW}             |_|   |||  | o o|               |                    ${NO_COLOR}"
echo -e "${YELLOW}                    ||| ( c  )               |  ____              ${NO_COLOR}"
echo -e "${YELLOW}                     ||| \= /                | ||   \_            ${NO_COLOR}"
echo -e "${YELLOW}                      ||||||                 V ||MacOS|           ${NO_COLOR}"
echo -e "${YELLOW}                      ||||||                ...||__/|-\"          ${NO_COLOR}"
echo -e "${YELLOW}                      ||||||             __|________|__           ${NO_COLOR}"
echo -e "${YELLOW}                        |||             |______________|          ${NO_COLOR}"
echo -e "${YELLOW}                        |||             || ||      || ||          ${NO_COLOR}"
echo -e "${YELLOW}                        |||             || ||      || ||          ${NO_COLOR}"
echo -e "${YELLOW}------------------------|||-------------||-||------||-||-------   ${NO_COLOR}"
echo -e "${YELLOW}                        |__>            || ||      || ||          ${NO_COLOR}"
echo -e " "
echo -e "${YELLOW}     Ohh no... The Makefile has fallen asleep!                    ${NO_COLOR}"
echo -e "${YELLOW}     Quickly - hit any key on the keyboard to wake it up!!        ${NO_COLOR}"
./extras/READ_COMMAND.sh

clear
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e "${BLUE}                                 _.-;;-._ 							${NO_COLOR}"
echo -e "${BLUE}                          '-..-'|   ||   |							${NO_COLOR}"
echo -e "${BLUE}                          '-..-'|_.-;;-._|							${NO_COLOR}"
echo -e "${BLUE}                          '-..-'|   ||win|							${NO_COLOR}"
echo -e "${BLUE}                          '-..-'|_.-''-._|							${NO_COLOR}"
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
./extras/PLAY_WINXP.sh
sleep 1

str=" Ohh... nooooo..."
write_yellow "$str"
echo
sleep 2

str=" This is VEEEEEEERY bad."
write_yellow "$str" "VEEEEEEERY" "${RED}"
echo
echo

sleep 2
echo -en "${YELLOW}                            (click any key to continue...)       ${NO_COLOR}"
./extras/READ_COMMAND.sh

clear
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e "${CYAN}                                 _.-;;-._ 							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|   ||   |							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|_.-;;-._|							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|   ||win|							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|_.-''-._|							${NO_COLOR}"
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "

str=" It seems you hit the MacOS system so hard,"
write_yellow "$str"
echo
sleep 1

str=" it broke down to WINDOWS XP!!!"
write_yellow "$str" "WINDOWS XP!!!" "${RED}"

echo
echo
sleep 2
echo -en "${YELLOW}                            (click any key to continue...)       ${NO_COLOR}"
./extras/READ_COMMAND.sh

clear
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e "${CYAN}                                 _.-;;-._ 							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|   ||   |							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|_.-;;-._|							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|   ||win|							${NO_COLOR}"
echo -e "${CYAN}                          '-..-'|_.-''-._|							${NO_COLOR}"
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
echo -e " "
write_yellow " The only way to fix this is by praying to"
echo
write_yellow " the ONE TRUE GOD." "TRUE" "${RED}"
sleep 1
echo -en "           "
write_yellow "- Which is?"
sleep 1
echo
echo -en "${YELLOW}          "
echo
write_yellow " (PS! It's a linux distro.)"
echo
echo
echo -e "${MAGENTA} hint: It is what \"I use BTW.\" ${NO_COLOR}"
r=0
while true; do
	echo -en "${CYAN} The ONE TRUE GOD is: ${NO_COLOR}"
    read answer
    lower_case_answer=$(echo "$answer" | tr '[:upper:]' '[:lower:]')
    if	[ "$lower_case_answer" == "arch" ] ||
    	[ "$lower_case_answer" == "arch linux" ] ||
    	[ "$lower_case_answer" == "arch distro" ] ||
    	[ "$lower_case_answer" == "linux arch" ]; then
		echo -e "${GREEN} That is ofcourse CORRECT."
		sleep 3
		clear
		for ((i=0; i<15; i++)); do
			echo -e " "
		done
		echo -e "${RED} O MIGHTY ARCH - SAVE US FROM THIS WINDOWS CRAP!${NO_COLOR}"
		for ((i=0; i<15; i++)); do
			echo -e " "
		done
		sleep 4
		clear
		./extras/PLAY_SWTHEME.sh &
		./extras/ANI_SCRIPT.sh
        break
    else
        echo " Wrong God. Please chroot into your brain and fix it."
		((r++))
    fi
	if [ "$r" -eq 3 ]; then
		echo -e "${GREEN} Ok, let me chroot your brain for you, and show you!"
		sleep 3
		clear
		for ((i=0; i<15; i++)); do
			echo -e " "
		done
		echo -e "${RED} O MIGHTY ARCH - SAVE US FROM THIS WINDOWS CRAP!${NO_COLOR}"
		for ((i=0; i<15; i++)); do
			echo -e " "
		done
		sleep 4
		clear
		./extras/PLAY_SWTHEME.sh &
		./extras/ANI_SCRIPT.sh
		break
	fi
done
PID2=$(cat "pid2.txt")
kill $PID2
rm -f "pid2.txt"
clear
sleep 2
for ((i=0; i<15; i++)); do
	echo -e " "
done
write_blue "UUhhh... WHAT was that!?"
for ((i=0; i<15; i++)); do
	echo -e " "
done
sleep 3
clear
for ((i=0; i<15; i++)); do
	echo -e " "
done
write_blue "Such a strange dream...!"
for ((i=0; i<15; i++)); do
	echo -e " "
done
sleep 2
clear
sleep 2
echo -e "${GREEN}[3 / 5] Linking files${NO_COLOR}"
sleep 1
echo -e "${GREEN}[4 / 5] Building push_swap${NO_COLOR}"
sleep 1
echo -e "${GREEN}[5 / 5] Complete! ${NO_COLOR}"