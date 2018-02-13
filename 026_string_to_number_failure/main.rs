fn main()
{
    let s: &'static str = "abc";
    let i = s.parse::<i32>();

    match i {
        Ok(_) => {},
        Err(e) => println!("{:?}", e),
    }
}

