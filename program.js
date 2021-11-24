//Question 1
// Program Runs 
function factors(num) { // factor takes in a number as parameter
/*Intializing the values */ 
var n=[];  
var j;  
for(j=0; j<=Math.floor(Math.sqrt(num)); j+=1)
	if(num %j==0){
  n.push(j); 
  if(n/j !==1)
  n.push(num/j)
}
n.sort(function(a,b)
{
return a-b; //sorting the numbers
})
return n; //returning the string 
}

//Question 2
//program Runs 
function tax(income, maritalStatus) 
{
var taxAmount; //intializing the taxAmount

//if single and the income is less than 30000
if(0>= income<30000 &&(maritalStatus=='single'|| maritalStatus=='SINGLE')) 
taxAmount= income*0.20; 

//if single and the income is greater than 30000
if(income >=30000 && (maritalStatus =='single' || maritalStatus=='SINGLE'))
taxAmount= income *0.25; 

//if married and the income is less than 50000
if(0>= income< 50000 && (maritalStatus =='married'|| maritalStatus== 'MARRIED'))
taxAmount= income *0.10;

//if married and the income is greater than 50000
if(income >= 50000 && (maritalStatus =='married' || maritalStatus =='MARRIED'))
taxAmount= income*0.15;

return taxAmount; // returning the taxAmount
	
}

//Question 3 
//Program Runs
function stdDev(array)
{
  var i,j,  count=0; //Intializing the variables
  for( j=0; j<array.length; j++){ // The length of the array 
  count += array[j]; 
  }
  var avg = count/array.length; // getitng the average number 
  count = 0; 
  
  for (i=0; i<array.length; i++)
	count += (array[i]-avg)*(array[i]-avg); 
  var mean= count/ array.length; // getting the mean for the standard deviation 
  return Math.sqrt(mean); // return the Standard Deviation 
}

//Question 4
//Program Runs 
function createIdPassword(first, last){
first=first.toUpperCase(); 
last= last.toUpperCase(); 

var id= ""; 
var passWord= ""; 

//creating the ID 
id= id+ first[0]+last; 

//creating the password 
passWord= passWord+ first[0]+first[first.length-1]; 

//The first 3 letters of the last name 
passWord += last.substring(0,3); 

//Length of the first and last name 
passWord= passWord +first.length+last.length; 

id_pass=[]; 
id_pass.push(id); 
id_pass.push(passWord);

return id_pass; 

}

//Question 5 
//Program Runs 
function removeDuplicates(array) {
  var duplicates = []; // Intializing the duplicate array 
  for(let j=0; j<array.length; j++){ // the array for each String 
    if(duplicates.indexOf(array[j]) === -1){ // if string not present returns -1
      duplicates.push(array[j]); 
    }
  }
  return duplicates; // returns the new array without the duplicates 
}


//Question 6 
//Program Runs 
class Student{
  constructor (name, gpa){
  this.name= name; 
  this.gpa=gpa; 
  }
//Getting the name and the gpa 
getName(){
  return this.age; 
}
getGpa(){
  return this.gpa; 
}
//Setting the name and gpa
setName(name){
  this.name= name; 
}
setGpa(gpa){ 
  this.gpa=gpa; 
}
// Honors if the student has a gpa higher than 3 than true else false
isHonors(){
  if(this.gpa>3)
    return true; 
  else 
    return false; 
}
}

/*s1= new Student("Fatema Chandoo", 4); 
alert("Name: ", s1.name + "\tGPA: "+ s1.gpa + "\tHonors: " + s1.isHonors()); 
*/



