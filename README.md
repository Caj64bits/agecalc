# Age Calculator

A small C program that calculates a person's age in years and months based on their birth year and month.

## Features

- Prompts for the year and month of birth
- Calculates the user's age in years and months
- Handles singular/plural wording for `year(s)` and `month(s)`
- Built with standard C and the C library

## Build

From the repository root, compile the program with:

```bash
gcc -std=c11 -Wall -Wextra -O2 main.c -o agecalc
```

## Run

```bash
./agecalc
```

Then enter:

- the year of birth
- the month of birth

Example:

```text
Enter year of birth: 1995
Enter month of birth: 7
You are 30 years and 3 months old
```

## Notes

This project currently calculates age in years and months. A future enhancement could include day-level precision.
