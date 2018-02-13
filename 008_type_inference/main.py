# -*- coding: utf-8 -*-

def main():
    # no concept of type definition
    i = 5
    d = 1.25
    t = True
    s = 'string'
    a = [1, 2, 3]

    print(
        '{0} {1} {2} {3} {4}'.format(
            i, d, t, s, a[0]
        )
    )

if __name__ == '__main__':
    main()

