#!/usr/bin/python3
"""Defining a function called island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    land_width = len(grid[0])
    land_height = len(grid)
    land_size = 0
    land_edges = 0

    for h in range(land_height):
        for w in range(land_width):
            if grid[h][w] == 1:
                land_size += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    land_edges += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    land_edges += 1

    return land_size * 4 - land_edges * 2
