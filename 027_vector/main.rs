fn main() {
    println!("initialize vector");
    let mut v: Vec<i32> = vec![1, 2, 3];
    println!("{:?}", v);
    println!("");

    println!("get length");
    println!("length is {}", v.len());
    println!("");

    println!("push");
    v.push(4);
    println!("{:?}", v);
    println!("");

    println!("pop");
    v.pop();
    println!("{:?}", v);
    println!("");

    println!("accessor []");
    println!("[0] is {}", v[0]);
    println!("");

    println!("range for");
    for x in v {
        println!("{}", x);
    }
    println!("");
}

