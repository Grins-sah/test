// fn main() {
//     // let mut num: i8 = 124;
//     // for i in 0..100 {
//     //     num += 127;
//     // }
//     // print!("Number: {}", num)
//     //     let is_male:bool = true;
//     //     let is_above_18 = true;
//     // if is_male {
//     //     println!("you are a male");
//     // }else{
//     //     println!("not a male");
//     // }
    
    
//     let ax:String =String::from("hello grins i am rust");
//     println!("{}",ax);
//     let ch:Option<char> = ax.chars().nth(0);
//     match ch{
//         Some(c) => println!("{}",c),
//         None=>println!("No charecter at 1000th index"),
//     }

//     // loops
//     for i in 0..11{
//         println!("{}",i);
//     }
//     // iteration
//     // map  , arrays , string
//     let sentence:String  = String::from("hello my name is grins");
//     let first_word :String = get_first_word(sentence);
//     print!("{}",first_word);
//     print!("{}",sum(10,20));


// }

// fn get_first_word(sentence:String) -> String{
//     let mut ans:String  = String::from("");
//     for char in sentence.chars(){
//         ans.push_str(char.to_string().as_str());
//         if char == ' '{
//             break;
//         }
//     }
//     return ans;
// }

// fn sum(a:i32 ,b:i32)-> i32{
//     return a+b;
// }

fn main() {
    let mut s1 = String::from("Hi there");
    s1 = take_ownership(s1);
    println!("{}",s1);
    
}
fn take_ownership(some_string:String)-> String{
    println!("{}",some_string);
    return some_string;
}