class Student:
    def __init__(self):
        self.__marks={}
   
    def add_student(self,roll_no,name,subject):
        self.__marks[roll_no]=(name,subject)
       
    def display(self):
        roll_no=int(input("Enter roll number to search :"))
        if roll_no in self.__marks:
            name,subject=self.__marks[roll_no]
            print(f"Roll no:{roll_no}\nName:{name}\nSujbect:{subject}")
        else:
            print("Student not found")

a=Student()

while(True):
    print("\n1.Add student")
    print("2.Display student")
    print("3.Exit")
    choice=int(input("Enter your choice :"))
    if choice ==1:
      roll_no=int(input("Enter roll number :"))
      name=input("Enter name :")
      subject=input("Enter the subject :")
      a.add_student(roll_no,name,subject)
    elif choice ==2:
        a.display()
            
    elif choice==3:
        print("Thank you")
        break
    else:
        print("Invalid choice! Try Again")





