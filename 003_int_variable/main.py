# -*- coding: utf-8 -*-

def main():
    # plain example
    i = 5;

    print('{0}'.format(i))

    # only one integer type
    int8 = 127
    int16 = 32767
    int32 = 2147483647
    int64 = 9223372036854775807
    uint8 = 255
    uint16 = 65535
    uint32 = 4294967295
    uint64 = 18446744073709551615

    print(
        '{0} {1} {2} {3} {4} {5} {6} {7}'.format(
            int8, int16, int32, int64, uint8, uint16, uint32, uint64
        )
    )

if __name__ == '__main__':
    main()

