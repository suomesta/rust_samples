enum Number {
    Zero,
    One,
    Two
}

fn main() {
    println!("{}", Number::Zero as i32);
    println!("{}", Number::One as i32);
    println!("{}", Number::Two as i32);
}

