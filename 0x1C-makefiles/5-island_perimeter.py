#!/usr/bin/python3

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    
    e = 0
    s = 0

    for i in range (len(grid)):
        for j in range (len(grid[i])):
            if grid[i][j] == 1:
                s += 1
                if j > 0 and grid[i][j - 1] == 1:
                    e += 1
                if i > 0 and grid[i - 1][j] == 1:
                    e += 1
            
    return s * 4 - e * 2


grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

print(island_perimeter(grid))