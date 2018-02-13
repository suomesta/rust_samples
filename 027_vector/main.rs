
fn print_vector(v: &Vec<i32>) -> ()
{
    print!("[");
    for (i, x) in v.iter().enumerate() {
        if i > 0 {
            print!(", ");
        }
        print!("{}", x);
    }
    println!("]");
}

fn main()
{
    println!("initialize vector");
    let mut v: Vec<i32> = vec![1, 2, 3];
    print_vector(&v);
    println!("");

    println!("get length");
    println!("length is {}", v.len());
    println!("");

    println!("push");
    v.push(4);
    print_vector(&v);
    println!("");

    println!("pop");
    v.pop();
    print_vector(&v);
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

