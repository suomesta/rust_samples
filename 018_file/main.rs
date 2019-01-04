use std::fs::File;
use std::io::{Read, Write};
use std::path::Path;

fn main() {
    {
        let path = Path::new("/tmp/tmp");

        let mut file = match File::create(&path) {
            Ok(file) => file,
            Err(_) => panic!("cannot create file"),
        };

        match file.write_all(b"Rust test") {
            Ok(_) => {},
            Err(_) => panic!("cannot write file"),
        }
    }

    {
        let path = Path::new("/tmp/tmp");

        let mut file = match File::open(&path) {
            Ok(file) => file,
            Err(_) => panic!("cannot open file"),
        };

        let mut s = String::new();
        match file.read_to_string(&mut s) {
            Ok(_) => println!("{}", s),
            Err(_) => panic!("cannot read file"),
        }
    }
}

