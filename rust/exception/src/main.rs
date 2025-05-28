use std::fs;
// enum Result {
//     Ok(String),
//     Err(String),

// };



fn main() {
    let contest  = fs::read_to_string("a.txt");
    match contest{
        Ok(s)=> println!("{}",s),
        Err(e)=> println!("error while reading")
    }
    println!("Hello, world!");
}
