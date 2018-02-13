# -*- coding: utf-8 -*-

def print_vector(v):
    print(v)


def main():
    print('initialize vector')
    v = [1, 2, 3]
    print_vector(v)
    print('')

    print('get length');
    print('length is {0}'.format(len(v)));
    print('');

    print('push');
    v.append(4);
    print_vector(v);
    print('');

    print('pop');
    v.pop();
    print_vector(v);
    print('');

    print('accessor []');
    print('[0] is {0}'.format(v[0]));
    print('');

    print('range for');
    for x in v:
        print('{0}'.format(x));
    print('');

if __name__ == '__main__':
    main()

