//Question 7 
//PROGRAM RUNS 
void scores(){
	int min=0, max=0, num=0, score; //intializing the variables
	double sum=0, average; 
	Console.WriteLine("Enter a score or -1 to quit:"); 
score= Convert.ToInt32(Console.ReadLine()); 
	
	if(score!=-1){
		max = score; 
		min = score; 
}

while (score!=-1){ //breaks the loop when -1 is entered 
	if(score<min) //Finding the min score 
		min=score; 
	if(score>max) //finding the Max score 
		max=score; 
	sum = sum +score; 
	num++; 
	Console.WriteLine("Enter a score or -1 to quit: "); 
score=Convert.ToInt32(Console.ReadLine()); 
}

average = sum / num; //Average 
//Printing to the console
Console.WriteLine("Minimum Score: "+min); 
Console.WriteLine("Maximum Score: "+max); 
Console.WriteLine("Average: "+average);

}

//Question 8 
//compiles well
public void createIdPassword(string last,string first)
{
	//first and last name to uppercase 
string firstName=first.ToUpper(); 
string lastName=last.ToUpper();
//getting the id 
string id=firstName[0]+lastName;
//the length of the names 
int a=firstName.Length;
int b=lastName.Length;
// getting the password 
string password=firstName[0]+firstName.Substring(firstName.Length-1)+lastName[0]+lastName[1]+lastName[2]
+Convert.ToString(a)+Convert.ToString(b);
//printing out the id and password 
Console.WriteLine("id: "+id);
Console.WriteLine("password: "+password);
}

//Question 9 
//compiles the files 
void fileSort(string infile, string outFile){

  StreamReader input = new StreamReader(infile); 

  //Getting the student count 
  string line = input.ReadLine();
  int countStudents = convert.ToInt32(line); 
	//intializing the variables
  int[] iD = new int[countStudents]; 
  char[] grade = new char[countStudents];
  double[] gpa =new double[countStudents];

  int k=0; 
  while((x= fin.ReadLine)) !=null)
  {
    string[] parts = line.Split(" "); 


    iD[k]= Convert.ToInt32(parts[0]); 
    grade[k]= Convert.ToChar(parts[1]);
    gpa[k]= Convert.ToDouble(parts[2]); 

    k+=1;  
  }
  //closing the input file
  input.close(); 

  //using selection sort 
  int min, newiD; 
  char newGrade; 
  double newGpa; 

  for(int z=0; z<countStudents-1; z++){
    min = z; 
    for (int k=z+1; k< countStudents; k++)
	{
      if (iD[k] <iD[min])
	  {
        min = k; 
      }
    }

    //Swapping the GPA 
    newGpa = gpa[z]; 
    gpa[z]=gpa[min]
    gpa[min]= newGpa; 

    //Swapping the Grades 
    newGrade = grade[z]; 
    grade[z]=grade[min]
    grade[min]= newGrade;


    //Swapping the ID 
    newiD= iD[z]; 
    iD[z]=iD[min]; 
    iD[min]= newiD;
  }


//Writing to count the students 
StreamWriter output = new StreamWriter(outFile); 
output.WriteLine(countStudents); 

//Wrting the rest of the data 
for(int j=0; j<countStudents;j++){
  output.WriteLine(iD[j]+ " "+grade[j]+" "+ gpa[j])
}

//closing the output file
output.close();
}


//Question 10 
//Compiles well 
class Rectangle
{
    //creating the private data members width and height.
    //and creating the default getter and setter for the widtha and height.
    public double width { get; set; }
    public double height { get; set; }

        //default constructor.
    public Rectangle()
    {
            this.width = 0;
            this.height = 0;
    }

        //one parameter constructor.
    public Rectangle(double value)
    {
            this.width = value;
            this.height = value;
    }

        //two parameter constructor.
    public Rectangle(double w,double h)
    {
            this.width = w;
            this.height = h;
    }

        //area() method will returns the ara of the rectangle.
    public double area()
    {
            return width * height;
    }

        //display() will prints the width and height.
    public void display()
    {
            Console.WriteLine("width: {0}",width);
            Console.WriteLine("height: {0}", height);

    }
}

//Question 11
//Compiles Well 
class Person
{
    //private data members name,age.
    private string name;
    private int age;
    //setter and getter for the name.
    public string Name
    {
            set { name = value; }
            get { return name; }
    }
        //setter and getter for the age.
    public int Age
    {
            set { age = value; }
            get { return age; }
    }
        //constructor.
    public Person(string _name,int _age)
    {
            name = _name;
            age = _age;
    }

    }
    //Student class inherites the Person class.
class Student:Person
{
        //private data mambers.
    private int id;
    private double gpa;
        //setter and getter methods for the id.
    public int Id
    {
            set { id = value; }
            get { return id; }
    }
        //setter and getter methods for the gpa.
    public double Gpa
    {
            set { gpa = value; }
            get { return gpa; }
    }
    public Student(string _name,int _age,int _id,double _gpa) : base(_name, _age)
    {
            id = _id;
            gpa = _gpa;

    } //prints out the student info 
    public void show()
    {
            Console.WriteLine("name: {0}",base.Name);
            Console.WriteLine("age: {0}", base.Age);
            Console.WriteLine("id: {0}", this.Id);
            Console.WriteLine("gpa: {0}", this.Gpa);
    }
}


	