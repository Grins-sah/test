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
impl Rect{
    pub fn new(width:f32,height:f32)->Rect{
        Rect{
            width,
            height
        }
    }
}