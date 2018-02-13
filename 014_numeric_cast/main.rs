fn main()
{
    let i: i32 = 5;
    let d: f64 = 1.9;
    let ui: u32 = 10;
    let negative_i: i32 = -1;
    let large_ui: u32 = 4294967295;

    println!("{} -> {}", i, i as f64);
    println!("{} -> {}", d, d as i32);
    println!("{} -> {}", i, i as u32);
    println!("{} -> {}", ui, ui as i32);
    println!("{} -> {}", negative_i, negative_i as u32);
    println!("{} -> {}", large_ui, large_ui as i32);
}

