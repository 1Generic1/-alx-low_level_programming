#!/usr/bin/python3
"""
this script Calculates the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
    return perimeter
