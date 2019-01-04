fn main() {
    // plain example
    let i: i32 = 5;

    println!("{}", i);

    // use all integer types
    let int8: i8 = 127;
    let int16: i16 = 32767;
    let int32: i32 = 2147483647;
    let int64: i64 = 9223372036854775807;
    let uint8: u8 = 255;
    let uint16: u16 = 65535;
    let uint32: u32 = 4294967295;
    let uint64: u64 = 18446744073709551615;

    println!("{} {} {} {} {} {} {} {}",
             int8, int16, int32, int64, uint8, uint16, uint32, uint64);
}

