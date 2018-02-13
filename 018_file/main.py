# -*- coding: utf-8 -*-

def main():
    with open('/tmp/tmp', 'w', encoding='utf8') as file:
        file.write('Python test')

    with open('/tmp/tmp', 'r', encoding='utf8') as file:
        buf = file.read()
    print(buf)

if __name__ == '__main__':
    main()

