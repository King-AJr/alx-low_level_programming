#!/usr/bin/python3
"""Contains perimeter function"""

def island_perimeter(grid):
    """returns the perimeter of a rectangle
        in a grid baased on positions of 1's 
        in the grid """
    a = len(grid)
    temp = 0
    length = 0
    for i in range(a):
        prev = 0
        width = temp
        temp = 0
        for j in grid[i]:
            if grid[i][j] == 1:
                prev = 1
                temp += 1
        if prev == 1:
            length += 1
    perimeter = 2 * (length + width)
    return perimeter
