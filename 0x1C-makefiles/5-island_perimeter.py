#!/usr/bin/python3
'''island_perimeter'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    count = 0
    for i in range(len(grid) - 1):
        l1 = grid[i]
        l2 = grid[i+1]
        for j in range(len(l1) - 1):
            if 1 in [l1[j], l1[j+1], l2[j], l2[j+1]]:
                count += 1
    return count
