use std::collections::HashMap;

fn print_map(m: &HashMap<char, i32>) -> ()
{
    print!("{{");
    for (i, (k, v)) in m.iter().enumerate() {
        if i > 0 {
            print!(", ");
        }
        print!("'{}':{}", k, v);
    }
    println!("}}");
}

fn main()
{
    println!("initialize and insert map");
    let mut m = HashMap::new();
    m.insert('A', 10i32);
    m.insert('B', 11i32);
    m.insert('C', 12i32);
    print_map(&m);
    println!("");

    println!("get length");
    println!("length is {}", m.len());
    println!("");

    println!("find");
    match m.get(&'A') {
        Some(&v) => println!("'A' is {}", v),
        _ => println!("Not found 'A'"),
    }
    println!("");

    println!("not found");
    match m.get(&'D') {
        Some(&v) => println!("'D' is {}", v),
        _ => println!("Not found 'D'"),
    }
    println!("");

    println!("remove");
    m.remove(&'A');
    print_map(&m);
    println!("");

    println!("range for");
    for (k, v) in m {
        println!("{}: {}", k, v);
    }
    println!("");
}
