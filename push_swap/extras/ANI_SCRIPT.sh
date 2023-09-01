#!/bin/bash
source extras/colours.sh
source extras/FUNCTIONS.sh

frames=(
"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._                111111111                              ${NO_COLOR}
${BLUE}   '-..-'|   ||   |              11111111111                             ${NO_COLOR}
${BLUE}   '-..-'|_.-;;-._|             1111111111111                            ${NO_COLOR}
${BLUE}   '-..-'|   ||win|            111111111111111                           ${NO_COLOR}
${BLUE}   '-..-'|_.-''-._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111              111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111              1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111              11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111               ${YELLOW}WORRY NOT MY CHILD.${BLUE}            11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._                111111111                              ${NO_COLOR}
${BLUE}   '-..-'|   ||   |              11111111111                             ${NO_COLOR}
${BLUE}   '-..-'|_.-;;-._|             1111111111111                            ${NO_COLOR}
${BLUE}   '-..-'|   ||win|            111111111111111                           ${NO_COLOR}
${BLUE}   '-..-'|_.-''-._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111               ${YELLOW}WORRY NOT MY CHILD.${BLUE}            11111111     ${NO_COLOR}
${BLUE}     1111               ${YELLOW}WITH ME, YOU CAN FIX ANYTHING.${BLUE}            111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._                111111111                              ${NO_COLOR}
${BLUE}   '-..-'|   ||   |              11111111111                             ${NO_COLOR}
${BLUE}   '-..-'|_.-;;-._|             1111111111111                            ${NO_COLOR}
${BLUE}   '-..-'|   ||win|            111111111111111                           ${NO_COLOR}
${BLUE}   '-..-'|_.-''-._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ${RED}___    ___${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+|+|  |+|+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---    ---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._                111111111                              ${NO_COLOR}
${BLUE}   '-..-'|   ||   |              11111111111                             ${NO_COLOR}
${BLUE}   '-..-'|_.-;;-._|             1111111111111                            ${NO_COLOR}
${BLUE}   '-..-'|   ||win|            111111111111111                           ${NO_COLOR}
${BLUE}   '-..-'|_.-''-._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ${RED}\\__\\${YELLOW}*${RED}  _\\_${YELLOW}*${BLUE} 111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111${YELLOW}*${RED}|+\\+|  |+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111 ${YELLOW}*${RED}---\\  \\---${YELLOW}*${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._                111111111                              ${NO_COLOR}
${BLUE}   '-..-'|   ||   |              11111111111                             ${NO_COLOR}
${BLUE}   '-..-'|_.-;;-._|             1111111111111                            ${NO_COLOR}
${BLUE}   '-..-'|   ||win|            111111111111111                           ${NO_COLOR}
${BLUE}   '-..-'|_.-''-._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${YELLOW}*   ${RED}\\ \\${YELLOW}*${BLUE} 111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111 ${YELLOW}*${RED}_\\_\\  \\_\\_\\${YELLOW}*${BLUE}111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+| ${YELLOW}*${RED}|+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111${YELLOW}*${RED} ---\\   \\--\\${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._                111111111                              ${NO_COLOR}
${BLUE}   '-..-'|   ||   |              11111111111                             ${NO_COLOR}
${BLUE}   '-..-'|_.-;;-._|             1111111111111                            ${NO_COLOR}
${BLUE}   '-..-'|   ||win|            111111111111111                           ${NO_COLOR}
${BLUE}   '-..-'|_.-''-._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11  ${RED}\\${BLUE} 11111111111111111                        ${NO_COLOR}
${BLUE}                         1${RED}\\${BLUE}11111  ${RED}\\${BLUE} 11111111111111                       ${NO_COLOR}
${BLUE}                        1111${RED}\\${BLUE}1111111 ${RED}\\${BLUE}1111111111111                      ${NO_COLOR}
${BLUE}                       1111${RED}\\${BLUE}1111111${RED}\\${BLUE}1111111111111111                     ${NO_COLOR}
${BLUE}                      111111${RED}\\${BLUE}1${RED}\\${BLUE}111111${RED}\\${BLUE}111111111111111                    ${NO_COLOR}
${BLUE}                     11111111111${RED}\\${BLUE}11${RED}\\${BLUE}111${RED}\\${BLUE}11111111111111                   ${NO_COLOR}
${BLUE}                   11111111111${RED}\\${BLUE}1111111${RED}\\${BLUE}11111111111111111                 ${NO_COLOR}
${BLUE}                  1111111111${RED}\\${BLUE}1111${RED}\\${BLUE}111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111                ${NO_COLOR}
${BLUE}                 11111111111111${RED}\\${BLUE}1  ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE} 111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${BLUE}${YELLOW}*   ${RED}\\${YELLOW}*${RED}\\${BLUE}  111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\_\\_\\${YELLOW}*${RED} \\_\\${YELLOW}*${RED}\\${BLUE} 111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+|  |+\\+|${YELLOW}*${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}-${YELLOW}*${RED}-\\ ${YELLOW}*${RED} \\--\\${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                   ${YELLOW}.${RED}\\${BLUE}${RED}/\\${YELLOW}.${RED}/${BLUE}            111                                 ${NO_COLOR}
${BLUE}                     ${RED}\\${YELLOW}. ${RED}\\${BLUE}           11111                                ${NO_COLOR}
${BLUE}                     ${YELLOW}. ${RED}\\${BLUE} ${RED}\\${BLUE}         1111111                               ${NO_COLOR}
${BLUE}          _.-;;-._    ${RED}\\${BLUE} ${RED}\\${BLUE}         111111111                              ${NO_COLOR}
${BLUE}  ''-..-'|   ||   |     ${RED}\\${BLUE} ${RED}\\${BLUE}      11111111111                             ${NO_COLOR}
${BLUE}  ''-..-'|_.-;;-._|    ${RED}\\${BLUE}  ${RED}\\${BLUE} ${RED}\\${BLUE}   1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-'|   ||win|      ${RED}\\${BLUE} ${YELLOW}.${RED}\\${BLUE}  111111111111111                           ${NO_COLOR}
${BLUE}  ''-..-'|_.-''-._|     ${RED}\\${BLUE} ${YELLOW}.  ${RED}\\${BLUE}11111111111111111                          ${NO_COLOR}
${BLUE}                          ${RED}\\${BLUE} ${RED}\\${BLUE} 111111111111111111                         ${NO_COLOR}
${BLUE}                         ${RED}\\${BLUE}11  ${RED}\\${BLUE} 1${RED}\\${BLUE}111111111111111                        ${NO_COLOR}
${BLUE}                        ${RED}\\${BLUE}1${RED}\\${BLUE}11111  ${RED}\\${BLUE} 11111111111111                       ${NO_COLOR}
${BLUE}                        1111${RED}\\${BLUE}1111111 ${RED}\\${BLUE}1111111111111                      ${NO_COLOR}
${BLUE}                       1111${RED}\\${BLUE}1111111${RED}\\${BLUE}1111111111111111                     ${NO_COLOR}
${BLUE}                      111111${RED}\\${BLUE}1${RED}\\${BLUE}111111${RED}\\${BLUE}111111111111111                    ${NO_COLOR}
${BLUE}                     1111111111${RED}\\${BLUE}111${RED}\\${BLUE}11${RED}\\${BLUE}111111111111111                   ${NO_COLOR}
${BLUE}                   11111111111${RED}\\${BLUE}1111111${RED}\\${BLUE}11111111111111111                 ${NO_COLOR}
${BLUE}                  1111111111${RED}\\${BLUE}111${RED}\\${BLUE}111${RED}\\${BLUE}11${RED}\\${BLUE}11111111111111111                ${NO_COLOR}
${BLUE}                 11111111111111${RED}\\${BLUE}1  ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE} 111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${BLUE} ${YELLOW}*  ${RED}\\${BLUE}${YELLOW}*${BLUE}${RED}\\${BLUE}  111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}*${RED}\\_\\${YELLOW}* ${RED}\\_\\${YELLOW}*${RED}\\${BLUE} 111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+|  |+\\+|${YELLOW}*${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---\\  \\-${YELLOW}*${RED}-\\${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                     ${YELLOW}.${BLUE}               111                                 ${NO_COLOR}
${BLUE}               ${RED}///${YELLOW}. ${RED}\\${BLUE}               11111                                ${NO_COLOR}
${BLUE}          _.-;;_${RED}\\${YELLOW}.${RED}\\${BLUE}                1111111                               ${NO_COLOR}
${BLUE}  ''-..-'|   ||  ${RED}\\${BLUE} ${RED}\\${BLUE}${YELLOW}.${RED}\\${BLUE}            111111111                              ${NO_COLOR}
${BLUE}  ''-..-'|_.-;;-.${RED}\\${BLUE} ${RED}\\${BLUE}             11111111111                             ${NO_COLOR}
${BLUE}  ''-..-'|   ||win| ${RED}\\${BLUE} ${RED}\\${BLUE} ${YELLOW}.${BLUE}       1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-'|_.-''-._|${RED}\\${BLUE}   ${RED}\\${BLUE} ${RED}\\${BLUE}     111111111111111                           ${NO_COLOR}
${BLUE}                       ${YELLOW}.${RED}\\${BLUE}  ${RED}\\${BLUE}  11111111111111111                          ${NO_COLOR}
${BLUE}                       ${RED}\\${BLUE}  ${RED}\\${BLUE} ${RED}\\${BLUE}1111111111111111111                         ${NO_COLOR}
${BLUE}                         ${RED}\\${BLUE}11  ${RED}\\${BLUE} 11111111111111111                        ${NO_COLOR}
${BLUE}                         1${RED}\\${BLUE}1111 ${RED}\\${BLUE}  111111111111111                       ${NO_COLOR}
${BLUE}                        1111${RED}\\${BLUE}111111  11111111111111                      ${NO_COLOR}
${BLUE}                       1111${RED}\\${BLUE}1111111${RED}\\${BLUE}1111111111111111                     ${NO_COLOR}
${BLUE}                      1111111${RED}\\${BLUE}1${RED}\\${BLUE}111111${RED}\\${BLUE}11111111111111                    ${NO_COLOR}
${BLUE}                     11111111111${RED}\\${BLUE}111${RED}\\${BLUE}11${RED}\\${BLUE}11111111111111                   ${NO_COLOR}
${BLUE}                   11111111111${RED}\\${BLUE}1111111${RED}\\${BLUE}11111111111111111                 ${NO_COLOR}
${BLUE}                  1111111111${RED}\\${BLUE}11${RED}\\${BLUE}1111${RED}\\${BLUE}11${RED}\\${BLUE}11111111111111111                ${NO_COLOR}
${BLUE}                 11111111111111${RED}\\${BLUE}1 ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE}  111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${BLUE} ${YELLOW}*${BLUE} ${RED}\\${BLUE}${YELLOW}*${BLUE}${RED}\\${BLUE} ${RED}\\${BLUE} 111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}*${RED}\\_\\${YELLOW}* ${RED}\\_\\${YELLOW}*${RED}\\${BLUE} 111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+|  |+\\+|${YELLOW}*${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---\\  \\-${YELLOW}*${RED}-\\${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                 ${YELLOW}.${BLUE}                   111                                 ${NO_COLOR}
${BLUE}           ${RED}\\${BLUE}  ${YELLOW}.    .${BLUE}                11111                                ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}_.${RED}\\${BLUE};;_                   1111111                               ${NO_COLOR}
${BLUE}  ''-..-'| ${RED}\\${BLUE} |${RED}\\${BLUE} ${RED}\\${BLUE}                 111111111                              ${NO_COLOR}
${BLUE}  ''-..-'|_.-${RED}\\${BLUE};;-.${RED}\\${YELLOW}_${BLUE}             11111111111                             ${NO_COLOR}
${BLUE}  ''-..-'|   ${YELLOW}*${BLUE} win| ${RED}\\${BLUE} ${RED}\\${BLUE}         1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-'|_.-''${RED}\\${BLUE}._|${RED}\\${BLUE}           111111111111111                           ${NO_COLOR}
${BLUE}                     ${RED}\\${BLUE}  ${RED}\\${BLUE}     11111111111111111                          ${NO_COLOR}
${BLUE}                   ${RED}\\${BLUE}   ${RED}\\${BLUE}     1111111111111111111                         ${NO_COLOR}
${BLUE}                      ${RED}\\${BLUE}  ${RED}\\${BLUE}11    11111111111111111                        ${NO_COLOR}
${BLUE}                      ${RED}\\${BLUE}  1${RED}\\${BLUE}1111    111111111111111                       ${NO_COLOR}
${BLUE}                        1111${RED}\\${BLUE}111111  11111111111111                      ${NO_COLOR}
${BLUE}                       1${RED}\\${BLUE}11${RED}\\${BLUE}111111111111111111111111                     ${NO_COLOR}
${BLUE}                      11111${RED}\\${BLUE}1${RED}\\${BLUE}1${RED}\\${BLUE}111111111111111111111                    ${NO_COLOR}
${BLUE}                     11111${RED}\\${BLUE}11111${RED}\\${BLUE}111111111111111111111                   ${NO_COLOR}
${BLUE}                   11111111111${RED}\\${BLUE}1111111111111111111111111                 ${NO_COLOR}
${BLUE}                  1111111111${RED}\\${BLUE}11${RED}\\${BLUE}1111${RED}\\${BLUE}11111111111111111111                ${NO_COLOR}
${BLUE}                 11111111111111${RED}\\${BLUE}1 ${RED}\\${BLUE} ${RED}\\${BLUE} ${RED}\\${BLUE}    111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${BLUE} ${YELLOW}*${BLUE} ${RED}\\${BLUE}${YELLOW}*${BLUE}${RED}\\${BLUE}   111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}*${RED}\\_\\${YELLOW}* ${RED}\\_\\_${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+|  |+\\+|${YELLOW}*${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---\\  \\-${YELLOW}*${RED}-\\${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}               ${YELLOW}.         ${BLUE}            111                                 ${NO_COLOR}
${BLUE}              ${YELLOW}.  .   .   ${BLUE}           11111                                ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}_${YELLOW}.       ${YELLOW}*${BLUE}               1111111                               ${NO_COLOR}
${BLUE}  ''-..-'| ${RED}\\${BLUE} ${RED}\\${BLUE}    ${YELLOW}.      ${BLUE}         111111111                              ${NO_COLOR}
${BLUE}  ''-..-'|${RED}\\${BLUE}.-${RED}\\${BLUE};;         ${YELLOW}. ${BLUE}      11111111111                             ${NO_COLOR}
${BLUE}  ''-..-'|   ${YELLOW}*${BLUE} w|n|${RED}\\${BLUE}            1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-'|_.-${RED}\\${BLUE}'${RED}\\${BLUE}._|${RED}\\${BLUE}           111111111111111                           ${NO_COLOR}
${BLUE}                ${RED}\\${BLUE}    ${RED}\\${BLUE}        11111111111111111                          ${NO_COLOR}
${BLUE}                ${RED}\\${BLUE}  ${RED}\\${BLUE}   ${RED}\\${BLUE}     1111111111111111111                         ${NO_COLOR}
${BLUE}                  ${RED}\\${BLUE}   ${RED}\\${BLUE}  ${RED}\\${BLUE}11    11111111111111111                        ${NO_COLOR}
${BLUE}                   ${RED}\\${BLUE}  ${RED}\\${BLUE}  1${RED}\\${BLUE}1111    111111111111111                       ${NO_COLOR}
${BLUE}                      ${RED}\\${BLUE} 11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       1${RED}\\${BLUE}11${RED}\\${BLUE}111111111111111111111111                     ${NO_COLOR}
${BLUE}                      11111${RED}\\${BLUE}1${RED}\\${BLUE}11111111111111111111111                    ${NO_COLOR}
${BLUE}                     1111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                   ${NO_COLOR}
${BLUE}                   11111111111${RED}\\${BLUE}1111111111111111111111111                 ${NO_COLOR}
${BLUE}                  1111111111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                ${NO_COLOR}
${BLUE}                 11111111111111${RED}\\${BLUE}1 ${RED}\\${BLUE} ${RED}\\${BLUE}      111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${BLUE} ${YELLOW}*${BLUE}  ${RED}\\${YELLOW}.${BLUE}   111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}*${RED}\\_\\${YELLOW}* ${RED}\\_${YELLOW}*${RED}_${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+| \\|+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111 ${YELLOW}.${RED}---\\  \\---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}           ${YELLOW}    .       ${BLUE}             11111                                ${NO_COLOR}
${BLUE}          ${YELLOW}    .  .   . ${BLUE}            1111111                               ${NO_COLOR}
${BLUE}         ${RED}\\${YELLOW}_.       *${BLUE}              111111111                              ${NO_COLOR}
${BLUE}  ''-..-'| ${RED}\\${BLUE} ${RED}\\${BLUE}   ${YELLOW} .    ${BLUE}          11111111111                             ${NO_COLOR}
${BLUE}  ''-..-'|${RED}\\${BLUE}.-${RED}\\${BLUE};;        ${YELLOW} .  ${BLUE}    1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-'|   ${YELLOW}*${BLUE} w|n|${RED}\\${BLUE}           111111111111111                           ${NO_COLOR}
${BLUE}  ''-..-'|_.-${RED}\\${BLUE}'${RED}\\${BLUE}._|${RED}\\${BLUE}          11111111111111111                          ${NO_COLOR}
${BLUE}                ${RED}\\${BLUE}  ${RED}\\${BLUE}   ${RED}\\${BLUE}     1111111111111111111                         ${NO_COLOR}
${BLUE}                  ${RED}\\${BLUE}   ${RED}\\${BLUE}  ${RED}\\${BLUE}11    11111111111111111                        ${NO_COLOR}
${BLUE}                   ${RED}\\${BLUE}  ${RED}\\${BLUE}  1${RED}\\${BLUE}1111    111111111111111                       ${NO_COLOR}
${BLUE}                      ${RED}\\${BLUE} 11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       1${RED}\\${BLUE}11${RED}\\${BLUE}111111111111111111111111                     ${NO_COLOR}
${BLUE}                      11111${RED}\\${BLUE}1${RED}\\${BLUE}11111111111111111111111                    ${NO_COLOR}
${BLUE}                     1111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                   ${NO_COLOR}
${BLUE}                   11111111111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111                 ${NO_COLOR}
${BLUE}                  1111111111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                ${NO_COLOR}
${BLUE}                 11111111111111${RED}\\${BLUE}1 ${RED}\\${BLUE} ${RED}\\${BLUE}      111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1${RED}\\${BLUE} ${RED}\\${BLUE} ${YELLOW}*${BLUE}  ${RED}\\${YELLOW}.${BLUE}   111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}*${RED}\\_\\${YELLOW}* ${RED}\\_${YELLOW}*${RED}_${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+| \\|+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111 ${YELLOW}.${RED}---\\  \\---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}         ${YELLOW}. *  ${YELLOW}/ ${BLUE}                   1111111                               ${NO_COLOR}
${BLUE}          ${YELLOW} .   .${BLUE}                  111111111                              ${NO_COLOR}
${BLUE}  ''-..-'${RED}\\${BLUE}   ${YELLOW}*${BLUE} ${YELLOW} + .${BLUE}              11111111111                             ${NO_COLOR}
${BLUE}  ''-..-'| .-${RED}\\${BLUE}${YELLOW}+${BLUE}                 1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-'|${RED}\\${BLUE}  ${YELLOW}*${BLUE} w ${RED}\\${BLUE} ${YELLOW}+${BLUE}           111111111111111                           ${NO_COLOR}
${BLUE}  ''-..-'|_.-${RED}\\${BLUE}'${RED}\\${BLUE}._|           11111111111111111                          ${NO_COLOR}
${BLUE}                ${RED}\\${BLUE}  ${RED}\\${BLUE}         1111111111111111111                         ${NO_COLOR}
${BLUE}             ${RED}\\${BLUE}    ${RED}\\${BLUE}       11    11111111111111111                        ${NO_COLOR}
${BLUE}                ${RED}\\${BLUE}  ${RED}\\${BLUE}  ${RED}\\${BLUE}  111111    111111111111111                       ${NO_COLOR}
${BLUE}                      ${RED}\\${BLUE} 11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                 ${RED}\\${BLUE}  ${RED}\\${BLUE}  1${RED}\\${BLUE}111111111111111111111111111                     ${NO_COLOR}
${BLUE}                   ${RED}\\${BLUE}  11${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                    ${NO_COLOR}
${BLUE}                     11${RED}\\${BLUE}1111${RED}\\${BLUE}1111111111111111111111111                   ${NO_COLOR}
${BLUE}                   111${RED}\\${BLUE}1111111${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111                 ${NO_COLOR}
${BLUE}                  1111111${RED}\\${BLUE}11${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                ${NO_COLOR}
${BLUE}                 11111111111${RED}\\${BLUE}11${RED}\\${BLUE}1 ${RED}\\${BLUE} ${YELLOW}*${BLUE}      111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1  ${RED}\\${BLUE} ${RED}\\${YELLOW}. ${RED}\\${YELLOW}.${BLUE}   111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}*${RED}\\_.  \\${RED}___${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111${RED}\\|+\\+| \\|+\\+|${YELLOW}.${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111 ${YELLOW}.${RED}---\\  ${YELLOW}*${RED}---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}      ${YELLOW}.      ${RED}\\${BLUE}                      11111                                ${NO_COLOR}
${BLUE}           ${YELLOW}_ ${BLUE}                      1111111                               ${NO_COLOR}
${BLUE}    ${RED}\\${BLUE} ${YELLOW}.${BLUE}                           111111111                              ${NO_COLOR}
${BLUE}  '' . ${YELLOW}*${BLUE}     ${YELLOW}*${BLUE}                   11111111111                             ${NO_COLOR}
${BLUE}  ''-.${YELLOW}/    . ${RED}\\${BLUE}${YELLOW}+   ~   ${BLUE}          1111111111111                            ${NO_COLOR}
${BLUE}  ''-..-' ${RED}\\${BLUE}  ${YELLOW}*${BLUE} + e .           111111111111111                           ${NO_COLOR}
${BLUE}  ''-..-'| .-${RED}\\${BLUE}'${RED}\\${BLUE}._|           11111111111111111                          ${NO_COLOR}
${BLUE}          ${RED}\\${BLUE}     ${RED}\\${BLUE}            1111111111111111111                         ${NO_COLOR}
${BLUE}             ${RED}\\${BLUE}      ${RED}\\${BLUE}     11    11111111111111111                        ${NO_COLOR}
${BLUE}                ${RED}\\${BLUE}  ${RED}\\${BLUE}     111111    111111111111111                       ${NO_COLOR}
${BLUE}               ${RED}\\${BLUE} ${RED}\\${BLUE}    ${RED}\\${BLUE} 11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                 ${RED}\\${BLUE}     1${RED}\\${BLUE}111111111111111111111111111                     ${NO_COLOR}
${BLUE}                   ${RED}\\${BLUE}  11${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                    ${NO_COLOR}
${BLUE}                     11${RED}\\${BLUE}1111${RED}\\${BLUE}1111111111111111111111111                   ${NO_COLOR}
${BLUE}                   111${RED}\\${BLUE}1111111${RED}\\${BLUE}1111111111111111111111111                 ${NO_COLOR}
${BLUE}                  1111111${RED}\\${BLUE}11${RED}\\${BLUE}11${RED}\\${BLUE}1111111111111111111111111                ${NO_COLOR}
${BLUE}                 11111111111${RED}\\${BLUE}11${RED}\\${BLUE}1 ${RED}\\${BLUE} ${YELLOW}*${BLUE}      111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1 ${RED}\\${BLUE}  ${RED}\\${YELLOW}.   .${BLUE}  111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111${YELLOW}*${RED}\\${YELLOW}.${RED}__${YELLOW}*  ${RED}\\___ ${YELLOW}.${BLUE}111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111${RED}\\|+\\+|\\ |+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111 ${YELLOW}.${RED}---\\  \\${RED}---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}    ${YELLOW}*${BLUE}  ${RED}\\${BLUE}     ${YELLOW}*${BLUE}                   11111111111                             ${NO_COLOR}
${BLUE}     ${YELLOW}+     . ${RED}\\${YELLOW}+   ~${BLUE}             1111111111111                            ${NO_COLOR}
${BLUE}  ''-.${RED}\\${YELLOW} ' ${RED}\\${BLUE}  ${YELLOW}*${BLUE} +se .           111111111111111                           ${NO_COLOR}
${BLUE}  ''-..-'| ${RED}\\${YELLOW}  '${RED}\\${BLUE}._|           11111111111111111                          ${NO_COLOR}
${BLUE}          ${RED}\\${BLUE}   ${RED}\\${BLUE}              1111111111111111111                         ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}  ${RED}\\${BLUE}    ${RED}\\${BLUE}        11    11111111111111111                        ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}          111111    111111111111111                       ${NO_COLOR}
${BLUE}             ${RED}\\${BLUE}       ${RED}\\${BLUE}  11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                  ${RED}\\${BLUE}    11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                 ${RED}\\${BLUE}   11${RED}\\${BLUE}111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   11111111${RED}\\${BLUE}1111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  11111111111${RED}\\${BLUE}111111111111111111111111111                ${NO_COLOR}
${BLUE}                 11111111${RED}\\${BLUE}1111${RED}\\${BLUE}11 ${RED}\\${BLUE}        111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1  ${RED}\\${BLUE}  ${RED}\\${BLUE}      111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111 ${RED}\\${YELLOW}.${RED}__${YELLOW}*  ${RED}\\___ ${YELLOW}.${BLUE}111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111${RED}\\|+\\+|  |+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111 ${YELLOW}.${RED}---\\  \\---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}     ${YELLOW}*${BLUE}                           11111111111                             ${NO_COLOR}
${BLUE}   ${YELLOW}+${BLUE}                            1111111111111                            ${NO_COLOR}
${BLUE}  ''-.${RED}\\${YELLOW} '    ${YELLOW}*${BLUE} ose             111111111111111                           ${NO_COLOR}
${BLUE}  ''-..-'|    ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}      ${RED}\\${BLUE}   ${RED}\\${BLUE}                  1111111111111111111                         ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}  ${RED}\\${BLUE}${RED}\\${BLUE}            11    11111111111111111                        ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}          111111    111111111111111                       ${NO_COLOR}
${BLUE}           ${RED}\\${BLUE} ${RED}\\${BLUE}          11111111111  11111111111111                      ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}   ${RED}\\${BLUE}    11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}               ${RED}\\${BLUE} ${RED}\\${BLUE}   11${RED}\\${BLUE}111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   11111111${RED}\\${BLUE}1111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  11111111111${RED}\\${BLUE}111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111${RED}\\${BLUE}111${RED}\\${BLUE}1111${RED}\\${BLUE}11 ${RED}\\${BLUE}        111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1    ${RED}\\${BLUE}       111111111111111              ${NO_COLOR}
${BLUE}               111111111111${RED}\\${BLUE}111 ${RED}\\${YELLOW}.${RED}__    ___\\${YELLOW}.${BLUE}111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111${RED}\\|+\\+| \\|+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---${YELLOW}*  ${RED}\\--- ${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE} ${YELLOW}*${BLUE}                               11111111111                             ${NO_COLOR}
${BLUE} ${YELLOW}+ ${RED}\\${BLUE}                            1111111111111                            ${NO_COLOR}
${BLUE}      ${RED}\\${BLUE}${YELLOW} '    *${BLUE}lose             111111111111111                           ${NO_COLOR}
${BLUE}   ${RED}\\${BLUE}  .-'     ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}      ${RED}\\${BLUE}   ${RED}\\${BLUE}                  1111111111111111111                         ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}  ${RED}\\${BLUE}             11    11111111111111111                        ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}          111111    111111111111111                       ${NO_COLOR}
${BLUE}           ${RED}\\${BLUE} ${RED}\\${BLUE}          11111111111  11111111111111                      ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}   ${RED}\\${BLUE}    11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}               ${RED}\\${BLUE} ${RED}\\${BLUE}   111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   111${RED}\\${BLUE}111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111${RED}\\${BLUE}11111111          111111111111111               ${NO_COLOR}
${BLUE}                11111111111111${RED}\\${BLUE}1 ${RED}\\${BLUE}       ${YELLOW}.${BLUE}  111111111111111              ${NO_COLOR}
${BLUE}               111111111${RED}\\${BLUE}11${RED}\\${BLUE}111 ${RED}\\${YELLOW}.${RED}__\\   ___ ${BLUE} 111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111${RED}\\|+\\+| \\|+\\+| ${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---${YELLOW}*${RED}   --- ${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE} ${YELLOW}*${BLUE}                               11111111111                             ${NO_COLOR}
${BLUE} ${YELLOW}+   .${BLUE}                          1111111111111                            ${NO_COLOR}
${BLUE}  ${YELLOW}.     '    ${YELLOW}*${BLUE}lose             111111111111111                           ${NO_COLOR}
${BLUE}      ${YELLOW}.-'    ${BLUE} ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}      ${RED}\\${BLUE}   ${RED}\\${BLUE}                  1111111111111111111                         ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}  ${RED}\\${BLUE}             11    11111111111111111                        ${NO_COLOR}
${BLUE}           ${RED}\\${BLUE}  ${RED}\\${BLUE}          111111    111111111111111                       ${NO_COLOR}
${BLUE}           ${RED}\\${BLUE}    ${RED}\\${BLUE}       11111111111  11111111111111                      ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}        11111111111111111111111111111                     ${NO_COLOR}
${BLUE}              ${RED}\\${BLUE}    ${RED}\\${BLUE}  1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     11${RED}\\${BLUE}111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ${YELLOW}.${RED}__    ___ ${YELLOW}.${BLUE}111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+| \\|+\\+| ${BLUE}1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---${YELLOW}*  ${RED}\\---  ${BLUE}11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE} ${YELLOW}  .  . ${BLUE}                         11111111111                             ${NO_COLOR}
${BLUE}  ${YELLOW}. ${BLUE}                            1111111111111                            ${NO_COLOR}
${BLUE}     ${RED}\\${YELLOW}  '    *${BLUE}lose             111111111111111                           ${NO_COLOR}
${BLUE}   ${RED}\\${YELLOW}  .-' ${BLUE}    ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}      ${RED}\\${BLUE}  ${RED}\\${BLUE}                   1111111111111111111                         ${NO_COLOR}
${BLUE}         ${RED}\\${BLUE}                11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ${RED}___    ${YELLOW}.${RED}__${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+|  |+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---${YELLOW}*${RED}   --- ${BLUE} 11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}  ${YELLOW}.     ${BLUE}                           1111111                               ${NO_COLOR}
${BLUE}   ${YELLOW}  .  ${BLUE}                          111111111                              ${NO_COLOR}
${BLUE}   ${YELLOW} .   ${BLUE}                         11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}    ${YELLOW}    '    *${BLUE}lose             111111111111111                           ${NO_COLOR}
${BLUE}    ${YELLOW}  .-'   ${BLUE} ' ._|            11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ${RED}___    ___${BLUE}  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 ${RED}|+\\+|  |+\\+|${BLUE} 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ${RED}---    ---${BLUE}  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE} ${YELLOW}. ${BLUE}                              11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE} ${YELLOW}   .-'${BLUE}                   11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                 ${YELLOW}AND AS ALWAYS...${BLUE}             11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}${YELLOW}.-'${BLUE}                     11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111         ${YELLOW}...MAY THE CHROOT BE WITH YOU.${BLUE}       11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                 ${YELLOW}I MUST GO NOW.${BLUE}               11111111    ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111             ${YELLOW}THERE SEEMS TO BE A DUCK${BLUE}         11111111     ${NO_COLOR}
${BLUE}     1111                     ${YELLOW}STUCK IN MY ROUTER...${BLUE}               111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111       ${YELLOW}IT ALWAYS GOES: *NAT, NAT, NAT.*${BLUE}       11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                1111111111111                            ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111111111                      ${NO_COLOR}
${BLUE}                       11111111111111111111111111111                     ${NO_COLOR}
${BLUE}                      1111111111111111111111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111111111111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                1111111111111111            111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                       ${YELLOW}...${BLUE}                    11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"
)

# Get length of an array
length=${#frames[@]}

for (( i=0; i<$length; i++ )); do
	clear
    echo -e "${frames[$i]}"
	if	[ "$i" -eq 0 ] || [ "$i" -eq 1 ] || [ "$i" -eq 19 ]; then
		sleep 3
	fi
	if	[ "$i" -eq 20 ] || [ "$i" -eq 21 ] || [ "$i" -eq 22 ]; then
		sleep 3
	fi
	if	[ "$i" -eq 23 ] || [ "$i" -eq 24 ] || [ "$i" -eq 25 ]; then
		sleep 3
	fi
	if	[ "$i" -eq 26 ] || [ "$i" -eq 27 ]; then
		sleep 3
	fi
    sleep 0.2
done
echo -en "                       "
write_yellow "(click any key to continue...)"
./extras/READ_COMMAND.sh
./extras/ANI_AWAY_SCRIPT.sh
clear
for ((i=0; i<30; i++)); do
	echo -e " "
done
echo -e "${BLUE}(click any key to continue...)${NO_COLOR}"
./extras/READ_COMMAND.sh
