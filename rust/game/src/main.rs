use std::io;
use rand::Rng;
fn main() {
    
    println!("Guess the Number : ");
    let secret_number = rand::thread_rng().gen_range(1..=100);
    let mut guess = String::new();
    io::stdin()
        .read_line(&mut guess)
        .expect("failed");
    println!("You guess is {} randome {}",guess,secret_number);
}
