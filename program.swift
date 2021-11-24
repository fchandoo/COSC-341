//Question 7 
//Program Runs 
/* Displaying the prime number that is divisble only by 1 */
func isPrime(num: Int){
var n :Bool = false; 
for i in 2 ... num/2{
  if(num % i==0){ // if the number is divible by 2
  n = true; 
  break; 
  }
}

if n == false{
  print (num, "is a prime number") // if it is a prime number 
}
else { 
print (num, "is not a prime number") // if not a prime number 
}
}
/* Displaying the Prime Numbers */
func displayPrimes(number: Int){
  var total : Int
  for num in 2 ... number{
     total = 0; 
    for z in 1 ... num/2{
      if(num % z == 0){
        total = total + 1; 
  }
    }
    if (total == 1) 
{
      print (num, "is a prime number ") // prints out all the prime numbers 
}
  }
}

//Question 8 
//Program Runs 
// Program takens in Double and String and Prints out Double 
func tax(income: Double, status: String) -> Double
{
//If status is single 
if(status == "single" || status=="SINGLE") 
  {// if the person is single and  income is less than 30000 than you have to pay 20% tax 
    if (income < 30000)
    {
      return income * 0.20
    }
    else // if the person is single and income more than 30000 than you have to pay 25% tax 
    {
      return income * 0.25
    }
  }
  //if status is married 
 if(status == "married" || status=="MARRIED")
  { // if the person is married and  income is less than 50000 than you have to pay 10% tax 
    if (income < 50000)
    {
      return income * 0.10
    }
    else  // if the person is married and  income is more than 50000 than you have to pay 15% tax 
    {
      return income * 0.15
    }
  }
  return 0.0 // return the double value
}



//Question 9 
//Program Runs
import Foundation 
//Return Double values
func quadratic(a: Double, b: Double, c:Double) ->(Double, Double){
  let formula =  (b*b)-(4*a*c); //formula if a is not equal to zero 

if (a==0){ //if a is equal to zero than return zeros.
  return(0,0); 
}

else{
	let quadraticFormula = sqrt(Double(formula)); //Intializing the square root the formula
	let sol1 = (-b + quadraticFormula)/(2*a); // Intializing solution1
	let sol2 = (-b - quadraticFormula)/(2*a); // Intializing solution2
	return (sol1, sol2); // returning the two solution of the functions. 
}
}


//Question 10
//Program Runs 
func createIdPassword(first: String , last: String )->(String, String){
	//Intializing the initials from the first name 
  let firstStart = first.index(first.startIndex, offsetBy:0); 
  //Convert it to string
  let firstpart = String(first[firstStart]) 

//combining the first part and the last name then upper case it 
var id = firstpart + last; 
id = id.uppercased(); 

//Intializing the array and the length of the first and last name 
let firstName = Array(first);
let lastName = Array(last);  
let firstLength = firstName.count; 
let lastLength = lastName.count; 

/*adding the first letter and last letter of the first name and the first 3 letters of the last name 
and the length of the first name and last name 
*/
var passWord = String(firstName[0]) + String(firstName[firstLength - 1]) + String(lastName[0]) + String(lastName[1]) + String (lastName[2]) + String(firstLength) + String(lastLength); 
// upeercased the password 
passWord = passWord.uppercased(); 

return(id, passWord) // returning the id and password 
}




//Question 11
//Program Runs 
//enter an Integer number and returns an Integer
func factorial(number: Int) ->Int {
  
  if(number == 0){ //If the number is 0 return 1
    return 1; 
  }
  else{ // finding the factorial
    return number * factorial(number: number - 1); 
  }
}

//Question 12 
 //program runs 
 /* sorting the number of arrays */
func sort(numarr: Array<Int>) -> Array<Int> { 
//takes in integers and returns integers 

    var sorted = numarr
    for _ in 0...sorted.count {
      for j in 1...sorted.count - 1 {
        if (sorted[j - 1] > sorted[j]) {
		//using the max value to sort the numbers in the array
          let maxValue = sorted[j - 1] 
          sorted[j - 1] = sorted[j]
          sorted[j] = maxValue
        }
      }
    }
    return sorted // return the sorted array of numbers 
}