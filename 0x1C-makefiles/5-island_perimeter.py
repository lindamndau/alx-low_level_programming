#!/usr/bin/python3
def island_perimeter(grid):
    """ Define perimeter class """
    if not grid:
        return 0

    result = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                result += 4

                if i - 1 >= 0:
                    if grid[1 - 1][j]:
                        result -= 2

                if j - 1 >= 0:
                    if grid[i][j - 1]:
                        result -= 2

    return result
