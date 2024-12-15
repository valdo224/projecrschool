#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define SUBJECTS 50

typedef struct{
 char name [50];
 int id;
 int age;
 int grades[SUBJECTS];
 char [MAX_NAME_LENGTH];
} struct newstudents

 students [MAX_STUDENTS];
 int studentcount = 0;

 //function declarations
 void addStudent();
 void displayRecords();
 void searchStudents();
 void sortRecord();
 void computerAverage();
 void findTopPerfomer();
 void updateOrDelete();
 void anlyzeGrades();


  int main (){
    int choice;
    while (1){
     printf("Students Management"
 "System\n");

    printf("1.Add a New Student\n");
    printf("2.Display All Record\n");
    printf("3.Search for a student\n");;
    printf("4.sort Record\n");
    printf("5. compute Average Grades\n");
    printf("6.Identify top performance\n");
    printf("7.Filter Students by grades\n");
   printf("8.Update or delete a Record\n");
   printf("9.Analyze Grades\n");
   printf("10. Exit\n");
     printf("enter your choice:");
     scanf("%d",&choice);

  switch(choice){}
  }
  struct newstudent;  //
  printf("Enter students id:");
  scanf("%d",&newStudent.id);
   printf("Enter name:");
   getchar();//clear newline
   ("newStudent.name;
   MAX_NAME_LENGHT,stdin);  //use forget to avoid buffer overflow


   newStudentsname =
   strcp(newStudentname,"\n");

    //removenewline

 printf("Enter age:");
  scanf("%d",&newStudent.age);
  printf(enter marks:");
   scanf("%d",&newStudent.marks);


  student[student_count++]=
  newStudent;
  printf("Student added succesfully.\n");
  }
  //Display all student records
  void displayRecords(){
  if(student_count==0){
    printf("no records to display.\n");
    return;
  }
  printf("\nStudents Records:\n";
  for(int = 0;< students_count,i++)
  {
      printf("iD:%d,Nmae:%d,Age:%d,Marks:52f\n"
             students[i],id
        students[i].name,students[i].age,
         students[i].marks);

  }

   //Serach for a student
   void searchStudent9){
       char
     searchName[MAX_NAME_LENGHT];
      int searchiD;
      int choice;


    printf("Search by ;\n1.iD\n2
       name\nEnter your choie:");
    scanf("%d",&choice);


    if(choice==1){
        printf("Enter iD:");
        scanf("%d,&searchiD);
        for(int i= 0,i< student_count,i++){

        }
          printf("1.update\n2.Delete\enter your choice:");
             scanf("%d",&choice):

        new name: ");
                    scanf("%[^\n]",
            &students[i].name);
                     printf(Enter
            new marks:");
                    scanf("%f",
             &students[i].marks);
                   printf("Record
         updated succesfully.\n");
                  }esle if (choice ==2){
                   for (intj = i;
            j < student_count - 1; j++{
                     studnts[j]
         = students[j] + 1]
              }
    ))        student_count--;
               printf("Record
    deleted succesfully.\n");
             }esle{
                printf("Invalid
        choice.\n");
        }
     return;
     }
     }
     printf("student not found\n");
     }

     void analyzeGrades() {
     if (stuent_count ++ 0){
          printf("no records
        found.\n");
          return;
          }
          float total = 0,min =
    students[0].marks, max =
    students[0].marks,
       for (inti =0 ; i<
       total_students; i++){
         sum += records[i].marks
         }
         printf("Average Marks:%,2f#n",sum total_students):
             }

             //funtion to identify top performer
               void IdentifyTopPerformer () {
                 if (total_students == 0){
                    printf("No records to identify.\n");
                    return ;
                 }
                 student top = records[0];
                  for (int i = 1; i<
                  total_students;i++){
                     if (records[i].marks>
                 top.marks){}
                  }
                 }
                    printf("Top Performer: %s with Marks%.2f\n", top.name,top.marks);

                    //Exit function
                      void exitprogram(){
                        printf("Exiting program.Goddbye!\n");
                         exit(0);
                         }













