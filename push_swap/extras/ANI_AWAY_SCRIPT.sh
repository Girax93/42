#!/bin/bash
source extras/colours.sh
source extras/FUNCTIONS.sh

frames2=(
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
${BLUE}                      11111        111111111111111111                    ${NO_COLOR}
${BLUE}                     11111111111111111111    111111111                   ${NO_COLOR}
${BLUE}                   1111111111111111111111111111111111111                 ${NO_COLOR}
${BLUE}                  111111111111111111111111111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                111111111111                111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111111  11111111  1111                      ${NO_COLOR}
${BLUE}                       1111111111111111111111  11111                     ${NO_COLOR}
${BLUE}                      11111        1111 1111111111111                    ${NO_COLOR}
${BLUE}                     111111111111111111 1    111111111                   ${NO_COLOR}
${BLUE}                   11111111111111111111 1111111111111111                 ${NO_COLOR}
${BLUE}                  1111111      11111111 11111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                111111111111                111111111111111              ${NO_COLOR}
${BLUE}               1111111111111111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  1111111111111111111       ${NO_COLOR}
${BLUE}       1111111111111                                   111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose             111111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             1111111111111111111                         ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111     11111111  1111                      ${NO_COLOR}
${BLUE}                       111111111   1111111111  11111                     ${NO_COLOR}
${BLUE}                      11111        1111 1111111111111                    ${NO_COLOR}
${BLUE}                     11111111111   1111 1    111111111                   ${NO_COLOR}
${BLUE}                   1111111111111   1111 1111111111111111                 ${NO_COLOR}
${BLUE}                  1111111      1   1111 11111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          111111111111111               ${NO_COLOR}
${BLUE}                111111111111                111111111111111              ${NO_COLOR}
${BLUE}                          11111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111111111111              11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  11111111111               ${NO_COLOR}
${BLUE}       111                                             111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                   1111111                               ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose                111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             11111111111                                 ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111     11111111  1111                      ${NO_COLOR}
${BLUE}                       111111111   1111111111  11111                     ${NO_COLOR}
${BLUE}                      11111        1111 1111111111111                    ${NO_COLOR}
${BLUE}                     11111111111   1111 1    111111111                   ${NO_COLOR}
${BLUE}                   1111111111111   1111 1111111111111111                 ${NO_COLOR}
${BLUE}                  1111111      1   1111 11111111111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          11111111      1               ${NO_COLOR}
${BLUE}                111111111111                111111111111111              ${NO_COLOR}
${BLUE}                          11111  ___    ___  111111111111111             ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111111111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  11111111     1111           ${NO_COLOR}
${BLUE}            111111111111111111                11111111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111                       11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  11111111111               ${NO_COLOR}
${BLUE}       111                                             111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                 11111111111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose                111111111111                           ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             11111111111                                 ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    111111111111111                       ${NO_COLOR}
${BLUE}                        11111111     11111111  1111                      ${NO_COLOR}
${BLUE}                       111111111   1111111111  11111                     ${NO_COLOR}
${BLUE}                      11111        1111 1111111111111                    ${NO_COLOR}
${BLUE}                     11111111111   1111 1    111111111                   ${NO_COLOR}
${BLUE}                   1111111111111   1111 1111111111111111                 ${NO_COLOR}
${BLUE}                  1111111      1   1111 111111  111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          11111111      1               ${NO_COLOR}
${BLUE}                111111111111                111111111111111              ${NO_COLOR}
${BLUE}                          11111  ___    ___  111  111111                 ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111  1111111111            ${NO_COLOR}
${BLUE}             111111111111111111  ---    ---  1111  11     1111           ${NO_COLOR}
${BLUE}            1111111       1111                111  111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111                       11111111111111111111        ${NO_COLOR}
${BLUE}        111111111111111111111                  11111111111               ${NO_COLOR}
${BLUE}       111                                             111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             11111111111                                 ${NO_COLOR}
${BLUE}                          11    11111111111111111                        ${NO_COLOR}
${BLUE}                         111111    11111                                 ${NO_COLOR}
${BLUE}                        11111111     11111111  1111                      ${NO_COLOR}
${BLUE}                       111111111   1111111111  11111                     ${NO_COLOR}
${BLUE}                      11111        1111 1111111111111                    ${NO_COLOR}
${BLUE}                     11111111111   1111 1                                ${NO_COLOR}
${BLUE}                   1111111111111   1111 1                                ${NO_COLOR}
${BLUE}                  1111111      1   1111 111111  111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          11111111      1               ${NO_COLOR}
${BLUE}                111111111111                111111111111111              ${NO_COLOR}
${BLUE}                          11111  ___    ___  111  111111                 ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111  1111111111            ${NO_COLOR}
${BLUE}                   111111111111  ---    ---  1111  11     1111           ${NO_COLOR}
${BLUE}                          1111                111  111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111                       1           11111111        ${NO_COLOR}
${BLUE}        111111111                              11111111111               ${NO_COLOR}
${BLUE}       111                                             111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                             11111111111                                 ${NO_COLOR}
${BLUE}                          11    1111        11111                        ${NO_COLOR}
${BLUE}                         111111    11111                                 ${NO_COLOR}
${BLUE}                        11111111     11111111  1111                      ${NO_COLOR}
${BLUE}                       111111111   1111111111  11111                     ${NO_COLOR}
${BLUE}                      11111             1111111111111                    ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                  1111111      1        111111  111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          11111111      1               ${NO_COLOR}
${BLUE}                111111111111                                             ${NO_COLOR}
${BLUE}                          11111  ___    ___                              ${NO_COLOR}
${BLUE}              11111111111111111 |+|+|  |+|+| 1111  1111111111            ${NO_COLOR}
${BLUE}                   111111111111  ---    ---  1111  11     1111           ${NO_COLOR}
${BLUE}                          1111                111  111111   111          ${NO_COLOR}
${BLUE}          11111111111111111111                1111111111111              ${NO_COLOR}
${BLUE}         1111111111111                       1           11111111        ${NO_COLOR}
${BLUE}        111111111                              11111111111               ${NO_COLOR}
${BLUE}       111                                             111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                111111111                                ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|           11111111111111111                          ${NO_COLOR}
${BLUE}                                   11111                                 ${NO_COLOR}
${BLUE}                          11    1111        11111                        ${NO_COLOR}
${BLUE}                         111111    11111                                 ${NO_COLOR}
${BLUE}                        11111111                                         ${NO_COLOR}
${BLUE}                       111                                               ${NO_COLOR}
${BLUE}                      11111                   1111111                    ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                  1111111      1        111111  111111111                ${NO_COLOR}
${BLUE}                 1111111111111111          11111111      1               ${NO_COLOR}
${BLUE}                111111111111                                             ${NO_COLOR}
${BLUE}                          1      ___    ___                              ${NO_COLOR}
${BLUE}              1111111111        |+|+|  |+|+| 1111      111111            ${NO_COLOR}
${BLUE}                   11111111      ---    ---  11    11     1111           ${NO_COLOR}
${BLUE}                          1                   111  111111   111          ${NO_COLOR}
${BLUE}                   11111111111                                           ${NO_COLOR}
${BLUE}                                             1           11111111        ${NO_COLOR}
${BLUE}                                               11111111111               ${NO_COLOR}
${BLUE}       111                                             111111111111      ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                    11111                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|           1111         1111                          ${NO_COLOR}
${BLUE}                                   11111                                 ${NO_COLOR}
${BLUE}                          11    1111        11111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                       111                                               ${NO_COLOR}
${BLUE}                      11111                   1111111                    ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                  1111111      1        1111          111                ${NO_COLOR}
${BLUE}                 111                       11111111      1               ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                          1      ___    ___                              ${NO_COLOR}
${BLUE}              1111111111        |+|+|  |+|+| 1111      111111            ${NO_COLOR}
${BLUE}                   11111111      ---    ---  11    11     1111           ${NO_COLOR}
${BLUE}                          1                   111  111111   111          ${NO_COLOR}
${BLUE}                   11111111111                                           ${NO_COLOR}
${BLUE}                                                           111111        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}       111                                                               ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  111111111                              ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|           1111         1111                          ${NO_COLOR}
${BLUE}                                   11111                                 ${NO_COLOR}
${BLUE}                          11    1111        11111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                       111                                               ${NO_COLOR}
${BLUE}                      11111                   111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                  1111111      1        1111          111                ${NO_COLOR}
${BLUE}                 111                       11111111      1               ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                          1      ___    ___                              ${NO_COLOR}
${BLUE}                                |+|+|  |+|+| 1111      111111            ${NO_COLOR}
${BLUE}                                 ---    ---                              ${NO_COLOR}
${BLUE}                          1                                 111          ${NO_COLOR}
${BLUE}                   11111111111                                           ${NO_COLOR}
${BLUE}                                                           111111        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}       111                                                               ${NO_COLOR}
${BLUE}      11111111                                              11111111     ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|           1111         1111                          ${NO_COLOR}
${BLUE}                                   11111                                 ${NO_COLOR}
${BLUE}                          11    1111        11111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                       111                                               ${NO_COLOR}
${BLUE}                      1                       111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                               1        1111          111                ${NO_COLOR}
${BLUE}                 111                                     1               ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                          1                                              ${NO_COLOR}
${BLUE}                                 ___    ___  1111      111111            ${NO_COLOR}
${BLUE}                                 ---    ---                              ${NO_COLOR}
${BLUE}                          1                                 111          ${NO_COLOR}
${BLUE}                   1111   1111                                           ${NO_COLOR}
${BLUE}                                                           111111        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}       111                                                               ${NO_COLOR}
${BLUE}                                                            111          ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1111                             ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|                                                      ${NO_COLOR}
${BLUE}                                   11111                                 ${NO_COLOR}
${BLUE}                          1                                              ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                       111                                               ${NO_COLOR}
${BLUE}                                              111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                                        1111          111                ${NO_COLOR}
${BLUE}                 111                                     1               ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                 ___    ___  1111                        ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                            111          ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}       111                                                               ${NO_COLOR}
${BLUE}                                                            111          ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                      1                                  ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}             *lose                11                                     ${NO_COLOR}
${BLUE}              ' ._|                                                      ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                         1               ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}       111                                                               ${NO_COLOR}
${BLUE}                                                            111          ${NO_COLOR}
${BLUE}     1111                                                         111    ${NO_COLOR}
${BLUE}    1                                                                1   ${NO_COLOR}"

"${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                     111                                 ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                  11                                     ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                        1                                ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}       111                                                               ${NO_COLOR}
${BLUE}                                                            111          ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}    1                                                                    ${NO_COLOR}"

"${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}
${BLUE}                                                                         ${NO_COLOR}"
)

# Get length of an array
length=${#frames2[@]}

for (( i=0; i<$length; i++ )); do
	clear
    echo -e "${frames2[$i]}"
#	if	[ "$i" -eq 0 ] || [ "$i" -eq 1 ] || [ "$i" -eq 19 ]; then
#		sleep 3
#	fi
    sleep 0.1
done