#!/usr/bin/python3
"""
This module defines the function island_perimeter
"""


def island_perimeter(grid):
    """
        This function returns the perimeter of an island

        grid: The rectangle

        Return (int): perimeter of the island
    """
    island_perimeter = 0
    for row in range(len(grid)):
        count = 0
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                count = 4
                # Top
                if row != 0 and grid[row - 1][column] == 1:
                    count -= 1
                # Left
                if column != 0 and grid[row][column - 1] == 1:
                    count -= 1
                # Right
                if column != len(grid[0]) - 1 and grid[row][column + 1] == 1:
                    count -= 1
                # Bottom
                if row != len(grid) - 1 and grid[row + 1][column] == 1:
                    count -= 1
                island_perimeter += count
    return island_perimeter
