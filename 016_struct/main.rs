struct Point
{
    x: i32,
    y: i32,
}

fn main()
{
    let mut point = Point{x: 10, y: 20};
    point.x += 5;

    println!("{} {}", point.x, point.y);
}

