cmake_minimum_required(VERSION 3.28)
project(Programming_in_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Programming_in_C
        7.11.c
        guess.h
        IsRight.h
        GuessNumber.h
        IsValidNum.h
        MakeNumber.h
        GuessNumber.c
        IsRight.c
        IsValidNum.c
        MakeNumber.c
)
