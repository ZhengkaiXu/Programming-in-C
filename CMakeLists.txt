cmake_minimum_required(VERSION 3.28)
project(Programming_in_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Programming_in_C
        ./ch7/7.11.c
        ./ch7/guess.h
        ./ch7/IsRight.h
        ./ch7/GuessNumber.h
        ./ch7/IsValidNum.h
        ./ch7/MakeNumber.h
        ./ch7/GuessNumber.c
        ./ch7/IsRight.c
        ./ch7/IsValidNum.c
        ./ch7/MakeNumber.c
)
