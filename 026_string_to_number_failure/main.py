# -*- coding: utf-8 -*-

def main():
    s = 'abc'
    try:
        i = int(s)
    except ValueError as e:
        print(e)        

if __name__ == '__main__':
    main()

