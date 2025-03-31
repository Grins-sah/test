use std::f32::consts::PI;

enum Direction {
    North,
    South,
    East,
    West
}

enum Shape{
    Square(f32),
    Circle(f32),
    Rect(f32,f32)
}

struct Rect{
    length:f32,
    width:f32
}
impl Rect{
    fn area(&self)-> f32{
        return self.length*self.width;
    }
}

fn main(){
    let direction:Direction = Direction::North;
    let s1:Shape = Shape::Square(10.0);
    let s2:Shape = Shape::Circle(5.64);
    let s3:Shape = Shape::Rect(10.0,20.0);
    let rect = Rect{
        length:10.0,
        width:20.2
    };
    steer(direction);
    println!("{}",rect.area());
    println!("{}",area(s1));
    println!("{}",area(s2));
    println!("{}",area(s3));
}
fn steer(dir:Direction){
    match dir{
        Direction::North=> println!("North Direction"),
        Direction::South=>println!("South Direction"),
        _=>println!("Horizontal Direction")
    }
}  
fn area(s:Shape)->f32{
    match s{
        Shape::Circle(side) => PI*PI*side,
        Shape::Rect(l,b )=> l*b,
        Shape::Square(a)=> a*a

    }
}