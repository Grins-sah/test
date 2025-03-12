pub struct Rect{
    pub height:f32,
    pub width:f32
}

impl Rect{
    pub fn area(&self)-> f32{
        return self.width * self.height;
    }
    pub fn print_msg(){
        println!("Static function")
    }
}