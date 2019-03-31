# -*- coding: utf-8 -*-

def print_map(m):
    print(m)


def main():
    print('initialize map')
    m = {'A': 10, 'B': 11, 'C': 12}
    print_map(m)
    print('')

    print('get length')
    print('length is {0}'.format(len(m)))
    print('')

    print('find')
    if 'A' in m:
        print("'A' is {0}".format(m['A']))
    else:
        print("Not found 'A'")
    print('')

    print('not find')
    if 'D' in m:
        print("'D' is {0}".format(m['D']))
    else:
        print("Not found 'D'")
    print('')

    print('remove')
    m.pop('A')
    print_map(m)
    print('')

    print('range for')
    for k, v in m.items():
        print('{0}: {1}'.format(k, v))
    print('')

if __name__ == '__main__':
    main()
