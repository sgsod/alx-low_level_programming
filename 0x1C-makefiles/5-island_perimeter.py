#!/usr/bin/python3
"""
Perimeter of Island 
"""

def island_perimeter(grid):
    """returns the number of zeros

    Args:
        grid: input grid of ones and zeros (1 == land, 0 == water)
        land is surrounded by water (land[-1] == 0)
        Grid is rectangular, width and height don’t exceed 100

    Description:
        one cell is a square with length 1
        grid cells are connected horizontally/vertically not diagonally



    """
    perim = 0
    
    for row in range(1, len(grid) - 1):
            for column in range(1, len(grid[row]) - 1):
                if grid[row][column] == 1:
                    if grid[row][column - 1] == 0:
                        perim += 1
                    if grid[row][column + 1] == 0:
                        perim += 1
                    if grid[row - 1][column] == 0:
                        perim += 1
                    if grid[row + 1][column] == 0:
                        perim += 1
    return perim
