//Question 1 
//Program Runs
 double compute_pi(int n){
    // initialize result
    double pi = 0, num=1; 
    for(int i=0; i<n; i++){
        // compute denominator
        int denominator = 2*i+1;
        // if i is even then add
        if(i%2==0) {
          pi += num / denominator;
          }
        // if i is odd then subtract
        else{
        pi -= num / denominator;
		} 
    }
    // finally multiply by 4
    pi = 4*pi;
    return pi;
 }



//Question 2 
//PROGRAM RUNS 
void scores()
{
    int min=0, score, max=0; //initializing minimum, max and the score value
    
    float avg_score=0, num=0; //initliazing the average and num scores
  cout<<"Enter the score or -1 to quit: "; 
  cin>>score; 
    if(score !=-1){
        min =score; 
        max=score; 
    }
    while(score !=-1)  //breaks the loop when enter -1
    {
        
        if(min>score)  //finding the minimum score
            min=score;
        if(max<score)  //finding maximum score
            max=score;
            
        avg_score=avg_score+score; //Finding the average score and finding the total sum.
        num++;   
        cout<<"Enter the score or -1 to quit: ";
        cin>>score;//take score from user
           //counting the total number of students
    }
    //Printing the output of Minimum, Maximum and Average Scores
    
    cout<<"Minimum score is : "<<min<<"\n";
    cout<<"Maximum score is : "<<max<<"\n";
    cout<<"Average score is : "<<(avg_score/num)<<"\n";
}


//Question 3
//Program RUNS and prints out the sorted function too

 void sort(int ids[], string grades[], float gpas[], int n)
{
    int i, j;  
    for (i = 0; i < n-1; i++) { 
        // Last i elements are already in place  
        for (j = 0; j < n-i-1; j++)  {
            if (ids[j] > ids[j+1]){
                //swap here 
                int tempid=ids[j];
                ids[j]=ids[j+1];
                ids[j+1]=tempid;
                
                string tempgrade=grades[j];
                grades[j]=grades[j+1];
                grades[j+1]=tempgrade;
                
                float tempgpa=gpas[j];
                gpas[j]=gpas[j+1];
                gpas[j+1]=tempgpa;
            }
        }
    }
}
void file_sort(char *infile, char *outfile)
{
    //defines an input stream for the data file
    ifstream dataIn;
    // open the input file 
    dataIn.open(infile);
    if (dataIn.fail())
    {
        cout << "File Not Found.";
        exit(1);
    }
    
    // read from the count
    int num;
    // Use dynamic arrays.
    int ids[num];
    string grades[10];
    float gpas[num];
    
    dataIn>>num;

    // loop through the student data 
    for(int j=0;j<num;j++)
    {
        dataIn>>ids[j];
        dataIn>>grades[j];
        dataIn>>gpas[j];
    }

    dataIn.close();
    
    //defines an output stream for the data file
    ofstream dataOut;
    // open output file 
    dataOut.open(outfile);
    if (dataOut.fail())
    {
        cout << "File Can not be created.";
        exit(1);
    }
    // calling the helper function
    sort(ids, grades, gpas,num);
    // write to the file.
    for(int j=0;j<num;j++)
    {
        dataOut<<ids[j]<<"\t ";
        dataOut<<grades[j]<<"\t ";
        dataOut<<gpas[j];
    }
    // close file
    dataOut.close();
    cout<<"Sorted Succssfully. "<<outfile;
}


//Question 4 
//PROGRAM RUNS
//PRINTING OUT THE AREA OF RECTANGLE
class Rectangle {
	//private constructors for height and width
  private: 
  double width; 
  double height; 

  public: 
  Rectangle(){
  width =0; 
  height=0; 
}
//width and height to parameter value 
Rectangle (double paramValue){ 
width= paramValue; 
height = paramValue; 
}
Rectangle(double h, double w){
height = h; 
width = w; 
}
//set width and height 
void setWidth(double w){
width =w; 
}
void setHeight(double h){
height=h; 
}
//get width and heigth 
double getWidth(){
return width; 
}
double getHeigth(){
return height; 
}
//area 
double area()
{
return (width*height);
}
//displaying the height and width 
void displays(){
cout<<"\nWidth: "<<width; 
cout<<"\nHeight: "<<height;
}
};



//Question 5 
class Score
{
private:
int numOfStudents;
double *scores;
  
public:
  
//default constructor
Score()
{
  
}
  
//parameterize constructor
Score(int num, double *s)
{
numOfStudents = num;
  
for(int i=0; i<num; i++)
{
scores[i] = s[i];
}
}
  
//method to display the average
double average()
{
double sum=0, avg;
  
for(int i=0; i<numOfStudents; i++)
{
sum = sum + scores[i];
}
  
avg = sum / numOfStudents;
  
return avg;
}
  
//method to display the score and average score
void display()
{
cout<<"The scores are given below:";
for(int i=0; i<numOfStudents; i++)
{
cout<<scores[i];
}
  
cout<<"\nThe average score is "<<average();
}
};


//Question 6
//PROGRAM RUNS 

class Person
{
//Only members of this can access these private variables
private:
//two private datas
    string name;
    int age;
    //Separate get and set method
public:
    //public constructor that will set the name and age
    Person()
    {

    }
    Person(string n,int a)
    {
     name = n;
     age = a;
    }
    void setName(string s)
    {
      name = s;
    }
    void setAge(int a)
    {
      age = a;
    }
    string getName()
    {
      return name;
    }
    int getAge()
    {
      return age;
    }
};
class Student : public Person
{ //Student class inherits Person class 
//Only members of this can access these private variables
private:
    int id;
    float gpa;
public:
    //Set and get gpa and id
    void setID(int i)
    {
      id = i;
    }
    void setGPA(float g)
    {
      gpa = g;
    }
    int getID()
    {
      return id;
    }
    float getGPA()
    {
      return gpa;
    }
    void print()
    {
      //Using Person class object calling Person class members
      cout << "Name:"<<getName() << " Age:" <<getAge();
      cout << " ID:" << getID() <<" GPA:" << getGPA();
    }
};

