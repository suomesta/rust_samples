mod my_module {
    pub struct Point {
        pub x: i32,
        pub y: i32,
    }

    pub fn output(x: i32, y: i32) {
        println!("{} {}", x, y);
    }
}

fn main() {
    let point = my_module::Point{x: 10, y: 20};
    my_module::output(point.x, point.y);
}

