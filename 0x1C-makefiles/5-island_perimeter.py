#!/usr/bin/python3
"""
Function to calculate the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island.
    Args:
        grid (List[List[int]]): A list of lists of integers
        representing the grid.
    Returns:
        int: The perimeter of the Island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                """assume 4 sides by default"""
                perimeter += 4
                """Check adjacent cells"""
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
    return perimeter
