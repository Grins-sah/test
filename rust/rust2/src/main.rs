use rect::Rect;
pub mod rect;

/**
 * struct is only static variable -> in static memory
 * but if struct is having string or unordered_map or vector -> then it is stored in heap memory
*/
fn main() {
    let r = Rect{
        width:10.0,
        height:10.0
    };
    println!("{} {}",r.width,r.height);
    println!("{}",r.area());
    Rect::print_msg();
}

// fn borrow(s2: &String)-> usize{
//     return s2.len();
// }
