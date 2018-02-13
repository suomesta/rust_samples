# -*- coding: utf-8 -*-

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return '{0} {1}'.format(self.x, self.y)


def main():
    point = Point(10, 20)

    print(point)

if __name__ == '__main__':
    main()

