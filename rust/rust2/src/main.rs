use rect::Rect;
pub mod rect;

/**
 * struct is only static variable -> in static memory
 * but if struct is having string or unordered_map or vector -> then it is stored in heap memory
*/
fn main() {
    let mut r = Rect{
        width:10.0,
        height:10.0
    };
    r.width = 10.23;
    
    let mut s1 = String::from("Grins sah");
    let s2 = &mut s1;
    println!("{}",s2);
    println!("{} {}",r.width,r.height);
    println!("{}",r.area());
    Rect::print_msg();
}

// fn borrow(s2: &String)-> usize{
//     return s2.len();
// }
