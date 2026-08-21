#!/usr/bin/env bash

if [[ -d "./bin" ]]; then
  echo "bin folder exists."
    echo "compiling now...\n"
else
  echo "bin folder does not exist."
  echo "making bin folder now\n."
  mkdir -p ./bin
  echo "bin folder created."
  echo "compiling now...\n"
fi

clang -Wall -Werror -Wextra main.c -o bin/main
echo "compiling complete."
echo "running project now...\n"

bin/main

