fn main() {
    let s: &'static str = "15";
    let i:i32 = s.parse::<i32>().unwrap();

    println!("{}", i);
}

