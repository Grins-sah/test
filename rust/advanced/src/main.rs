// // vectors
// // hashmap
// use std::collections::HashMap;
// fn vector_operation_even(vec:Vec<i32>)->Vec<i32>{
//     let n: usize = vec.len();
//     let mut temp:Vec<i32> = Vec::new();
//     for i in 0..n{
//         if vec[i]%2==0{
//             temp.push(vec[i]);
//         }
//     }
//     return temp;
// }

// fn vector(){
//     let mut vec: Vec<i32> = Vec::new();
//     let  v = vec![1,2,3,5];
//     for i in 0..89{
//         vec.push(i);
//     }
//     println!("{:?}",vector_operation_even(vec));
//     println!("{:?}",vector_operation_even(v));

// }
// fn problem(){
//     vector();
//     let mut m: HashMap<i32,i32> = HashMap::new();
//     m.insert(6,1);
//     let test_user = m.get(&6);
//     match test_user {
//         Some(content)=>{
//             println!("the value is {}",content)
//         }
//         None =>{
//             println!("not found");
//         }
//     }

// }  
//tuple
// for (key,value) in vec 
// is used to unwrap vector of tuple
/*

iterator

fn main(){
    let mut v = vec![1,2,3,5,6,7];
    let mut v_iter = v.iter_mut(); // it borrows the values it did not consumed it
    // let v_into_iter = v.into_iter(); it takes away the ownership
    while let Some(val)=v_iter.next(){
        println!("{val}")
    }
    for val in v_iter{
        *val = *val+1;
        println!("{val}")
    }
}

*/
/* 
fn main(){
    let v = vec![1,2,3,5];
    let v_iter = v.iter();
    let sum:i32 = v_iter.sum();// iterator is consumed
    println!("{}",sum)
}
 
*/
/* 
fn main(){
    let v = vec![1,2,3,5,6];
    let v_iter = v.iter();
    let v_up_iter = v_iter.map(|x| x*2);
    for i in v_up_iter{
       print!("{i} ") 
    }

}
*/

fn main(){
    let v = vec![1,2,3,5,6,9];
    let v_iter = v.into_iter();
    let v_updated_odd_filter_iterator = v_iter.filter(|x| (*x%2)==1).into_iter();
    let mut v2:Vec<i32> = Vec::new();
    // convert the iterator in the vector
    let v3:Vec<i32> = v_updated_odd_filter_iterator.collect();
    // for i in v_updated_odd_filter_iterator{
    //     v2.push(i*2);
    // }
    println!("{:?}",v3);
 
}