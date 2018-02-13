# -*- coding: utf-8 -*-

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y


def main():
    point = Point(10, 20)
    point.x += 5;

    print('{0} {1}'.format(point.x, point.y))

if __name__ == '__main__':
    main()

