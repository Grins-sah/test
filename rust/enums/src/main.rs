use std::fs;
fn find_first_a(s:String) ->Option<i32>{
    for (idx,ch) in s.chars().enumerate(){
        if ch=='a' {
            return Some(idx as i32);
        }
    }
    return None;
}
fn main(){
    let res =fs::read_to_string("example.txt");
    match res {
        Ok(content)=>{
            println!("file have data {} ",content);
        }
        Err(err)=>{
            println!("Error : {} ",err)
        }
    }
    let my_string = String::from("Hello rust");
    let res2 = find_first_a(my_string);
    match res2 {
        Some  
    }

}