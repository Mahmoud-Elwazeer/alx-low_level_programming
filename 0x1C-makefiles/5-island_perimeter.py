#!/usr/bin/python3
"""island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    length = 0
    width = 0

    for i in grid:
        if length == 0:
            length = sum(i)
        if length < sum(i):
            length = sum(i)

    for i in range(len(grid)):
        check = 0
        for j in range(len(grid)):
            check += grid[j][i]

        if check > 1:
            width = check
            break
        elif check == 1:
            width = check

    return ((length + width) * 2)
