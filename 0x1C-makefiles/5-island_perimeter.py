#!/usr/bin/python3
""" island_perimeter function module"""


def island_perimeter(grid):
    """ Function that returns the perimeter of island """

    perimeter = 0

    numberRows = len(grid)

    if grid != []:
        numberColumns = len(grid[0])

    for a in range(numberRows):
        for b in range(numberColumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == numberRows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == numberColumns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
