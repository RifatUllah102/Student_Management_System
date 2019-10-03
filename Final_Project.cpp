//Name: Md. Rifat Ullah
//Id: 2014-1-60-102
//Project Name: Student Management Systems
//Course: CSE107
//Section: 01
//Instructor: Dr. Shaikh Muhammad Allayear(DSMA)

#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include<windows.h>
#include<process.h>

using namespace std;

class Student_Info{
protected:
    char Name[25];
    char ID[15];
    char Department[50];
    char SContact[15];
    char Email[25];
    char Father_Name[25];
    char Mother_Name[25];
    char Guardian_Name[25];
    char FContact_Number[15];
    char GContact_Number[15];
    char User_Name[20];
    char Password[20];

public:
    void Registration();
};


void Student_Info::Registration(){

    int n=0;

    cout<<"Student's Informations.\n";

    cout<<"Student Name : ";
    fflush(stdin);
    cin>>Name;
    fflush(stdin);
    cout<<"Student ID : ";
    cin>>ID;
    fflush(stdin);
    cout<<"Department : ";
    cin>>Department;
    fflush(stdin);
    cout<<"Contract Number : ";
    cin>>SContact;
    fflush(stdin);
    cout<<"Email : ";
    cin>>Email;
    fflush(stdin);

    cout<<"\nFamily Information's...\n\n";

    cout<<"Father's Name : ";
    cin>>Father_Name;
    fflush(stdin);
    cout<<"Father's Contract : ";
    cin>>FContact_Number;
    fflush(stdin);
    cout<<"Mother's Name : ";
    cin>>Mother_Name;
    fflush(stdin);
    cout<<"Guardian Name : ";
    cin>>Guardian_Name;
    fflush(stdin);
    cout<<"Contract Number : ";
    cin>>GContact_Number;
    fflush(stdin);
    cout<<"User Name : ";
    cin>>User_Name;
    fflush(stdin);
    cout<<"Password : ";
    cin>>Password;
    fflush(stdin);


    FILE *fp;

    fp=fopen("student number.txt","r");

    if(fp!=NULL){
    fscanf(fp,"%d",&n);
    }
    else{
        n=0;
    }

    fclose(fp);

    n=n+1;

    fp=fopen("student number.txt","w");

    fprintf(fp,"%d\n",n);

    fclose(fp);

    fp=fopen("registration.txt","a");

    fprintf(fp,"%s\n",Name);
    fprintf(fp,"%s\n",ID);
    fprintf(fp,"%s\n",Department);
    fprintf(fp,"%s\n",SContact);
    fprintf(fp,"%s\n",Email);
    fprintf(fp,"%s\n",Father_Name);
    fprintf(fp,"%s\n",FContact_Number);
    fprintf(fp,"%s\n",Mother_Name);
    fprintf(fp,"%s\n",Guardian_Name);
    fprintf(fp,"%s\n",GContact_Number);
    fprintf(fp,"%s\n",User_Name);
    fprintf(fp,"%s\n",Password);


    fclose(fp);

    system("cls");
}

class Others{
public:
    void Help();
    void CGPA();
    void Flow_Chart();
    void Chart();
    void Department_Help();
};
void Others::Flow_Chart(){
     cout<<"            Course Flow Chart[Effective from Fall 2009 Semester]             \n"<<endl;
    cout<<"|---------------------------------------------------------------------------|"<<endl;
    cout<<"|     1'st Year    |     2'nd Year    |     3'rd Year    |     4'th Year    |"<<endl;
    cout<<"|------------------|------------------|------------------|------------------|"<<endl;
    cout<<"|Course  |Pre      |Course  |Pre      |Course  |Pre      |Course  |Pre      |"<<endl;
    cout<<"|(Cradit)|requisite|(Cradit)|requisite|(Cradit)|requisite|(Cradit)|requisite|"<<endl;
    cout<<"|------------------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|1st |ENG101|      |GEN201  | ENG102  |CSE301  | CSE205  |CSE405  |CSE245   |"<<endl;
    cout<<"|Sem.| (3)  |      |  (3)   |         |  (4)   |         |  (4)   |CSE350   |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |MAT101|      |CSE205  | CSE107  |CSE345  | CSE105  |CSE497  |         |"<<endl;
    cout<<"|    |  (3) |      |  (3)   |         |  (4)   |         |  (3)   |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |CSE105|      |CSE209  |         |OBE-I   | CSE205  |OCSE-I  |         |"<<endl;
    cout<<"|    |  (4) |      |  (4)   |         |  (3)   | CSE251  |        |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |      |      |        |         |        |         |OCSE-II |         |"<<endl;
    cout<<"|----|------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|2nd |ENG102|ENG101|OGEN-I  |         |CSE325  |         |CSE498  |         |"<<endl;
    cout<<"|Sem.|  (3) |      |  (3)   |         |  (4)   |         |  (4)   |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |MAT102|MAT101|MAT205  | MAT104  |CSE348  | CSE209  |OCSE-III|         |"<<endl;
    cout<<"|    |  (3) |      |  (3)   |         |  (3)   | MAT205  |        |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |CHE109|      |CSE207  | CSE205  |CSE350  | CSE251  |OCSE-IV |         |"<<endl;
    cout<<"|    |  (4) |      |  (4)   |         |  (3)   | CSE348  |        |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |CSE107|CSE105|CSE225  | CSE105  |OBE-II  |         |        |         |"<<endl;
    cout<<"|    |  (4) |      |  (4)   | MAT102  |  (3)   |         |        |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |      |      |CSE245  | CSE207  |        |         |        |         |"<<endl;
    cout<<"|    |      |      |  (4)   |         |        |         |        |         |"<<endl;
    cout<<"|----|------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|3rd |PHY109|MAT102|OGEN-II |         |CSE360  | CSE325  |CSE411  | CSE301  |"<<endl;
    cout<<"|Sem.|  (4) |      |  (3)   |         |  (3)   | CSE345  |  (4)   |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |MAT104|MAT102|PHY109  | MAT205  |CSE365  | CSE245  |CSE442  | CSE360  |"<<endl;
    cout<<"|    |  (3) |      |  (3)   |         |  (4)   |         |  (4)   |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |STA102|      |CSE251  | CSE209  |CSE375  | CSE245  |OCSE-V  |         |"<<endl;
    cout<<"|    |  (3) |      |  (4)   |         |  (3)   |         |        |         |"<<endl;
    cout<<"|    |------|------|--------|---------|--------|---------|--------|---------|"<<endl;
    cout<<"|    |      |      |        |         |        |         |CSE499  |         |"<<endl;
    cout<<"|    |      |      |        |         |        |         |  (4)   |         |"<<endl;
    cout<<"|----|-------------|------------------|------------------|------------------|"<<endl;
    cout<<"|Total Cradit-34   |38                |34                |34                |"<<endl;
    cout<<"|---------------------------------------------------------------------------|"<<endl;
    cout<<"\n\nLegends : "<<endl;
    cout<<"OGEN = Optional General Education Course[GEN 202 to GEN 239]"<<endl;
    cout<<"OBE = Optional Business and Economics Course[ACT101,BUS321,ECO101,ECO102,";
    cout<<"FIN101,MGT101,MGT337,MKT101,MKT102]"<<endl;
    cout<<"OCSE = Optional CSE Course[Three courses from one group and two courses from \n";
    cout<<"one or two groups other then the group selected for three courses]"<<endl;
}


void Others::Chart(){
    int X;
    do
    {
    cout<<"Which Department.\n";
    cout<<"\n01: Department of Applied Statistics";
    cout<<"\n02: Department of Business Administration";
    cout<<"\n03: Department of Business Administration, MBA/EMBA/MBM Programs";
    cout<<"\n04: Department of Computer Science & Engineering";
    cout<<"\n05: Department of Economics";
    cout<<"\n06: Department of Electrical & Electronic Engineering";
    cout<<"\n07: Department of Electronics and Communications Engineering";
    cout<<"\n08: Department of English";
    cout<<"\n09: Department of Genetic Engineering and Biotechnology";
    cout<<"\n10: Department of Law";
    cout<<"\n11: Department of Pharmacy";
    cout<<"\n12: Department of Social Relations";
    cout<<"\n13: Back to Your Profile.";
    cout<<"\nPlease Select Your Department : ";
    cin>>X;
        switch(X)
        {
        case 1:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 2:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 3:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 4:
            cout<<"\n\nThis Flow Chart is Only for Department of Computer Science & Engineering.\n\n";
            Flow_Chart();
            break;
        case 5:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 6:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 7:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 8:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 9:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 10:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 11:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 12:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 13:
            break;
        default :cout<<"Error in input. Try again\n";
        }
    }while(X!=13);

}
void Others::CGPA(){

    cout<<"     Grading System of this UNIVERSITY.........\n"<<endl;
    cout<<" Numerical Scores        Letter Grade        Grade Point\n"<<endl;
    cout<<"     97-100                  A+                  4.00"<<endl;
    cout<<"  90- below 97               A                   4.00"<<endl;
    cout<<"  87- below 90               A-                  3.70"<<endl;
    cout<<"  83- below 87               B+                  3.30"<<endl;
    cout<<"  80- below 83               B                   3.00"<<endl;
    cout<<"  77- below 80               B-                  2.70"<<endl;
    cout<<"  73- below 77               C+                  2.30"<<endl;
    cout<<"  70- below 73               C                   2.00"<<endl;
    cout<<"  67- below 70               C-                  1.70"<<endl;
    cout<<"  63- below 67               D+                  1.30"<<endl;
    cout<<"  60- below 63               D                   1.00"<<endl;
    cout<<"      below 60               F                   0.00"<<"\n\n"<<endl;

    int number,i,cradit[10];
    char Grade[10][10];
    float sum=0, multiply=0,Summation_Of_Grade_and_Cradit=0,CGPA=0;

    cout << "Enter How many Course You Did In the LasT Semester?..._";
    cin >> number;
    cout<<"\n\n";


    for(i=0; i<number; i++){
        cout<<"Enter "<<i+1<<" Subject Grade:";
        cin>>Grade[i];
        cout<<"\n";
        cout<<"Enter " <<i+1<<" Subject Cradit:";
        cin>>cradit[i];
        cout<<"\n";
        if(strcmp(Grade[i],"A+")==0||strcmp(Grade[i],"a+")==0||strcmp(Grade[i],"A")==0||strcmp(Grade[i],"a")==0){
            multiply=(4)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
       else if(strcmp(Grade[i],"A-")==0||strcmp(Grade[i],"a-")==0){
            multiply=(3.70)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
       else if(strcmp(Grade[i],"B+")==0||strcmp(Grade[i],"b+")==0){
            multiply=(3.30)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"B")==0||strcmp(Grade[i],"b")==0){
            multiply=(3.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"B-")==0||strcmp(Grade[i],"b-")==0){
            multiply=(2.70)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"C+")==0||strcmp(Grade[i],"c+")==0){
            multiply=(2.30)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"C")==0||strcmp(Grade[i],"c")==0){
            multiply=(2.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"C-")==0||strcmp(Grade[i],"c-")==0){
            multiply=(1.70)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"D+")==0||strcmp(Grade[i],"d+")==0){
                cout<<"May be, You should retake this Subject...."<<endl;
            multiply=(1.30)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"D")==0||strcmp(Grade[i],"d")==0){
                cout<<"WARNING! You Must Retake This Subject....."<<endl;
            multiply=(1.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else if(strcmp(Grade[i],"F")==0||strcmp(Grade[i],"f")==0){
                cout<<"WARNING! You Must Retake This Subject....."<<endl;
            multiply=(0.00)*cradit[i];
            Summation_Of_Grade_and_Cradit=Summation_Of_Grade_and_Cradit+multiply;
        }
        else{
            cout<<"You are Fail in this Subject OR Something went wrong.!"<<endl;
        }

        sum=sum+cradit[i];

    }
    CGPA=float(Summation_Of_Grade_and_Cradit)/sum;
    cout<<"Your CGPA is: "<<CGPA<<"\n\n"<<endl;

    float X=CGPA;

    if(X>=3.80){
        cout<<"WELL DONE.Your Result Is Very Good.\nKeep It Up...\n";
    }
    else if(X>=3.30 && X<3.80){
        cout<<"BrillianT! Try...\n";
    }
    else if(X>=3.00 && X<3.30){
        cout<<"GooD Result...\n";
    }
    else if(X>=2.50 && X<3.00){
        cout<<"Not Enough GOOD You.\n";
    }
    else if(X>=2.00 && X<2.50){
        cout<<"Work Hard. You are in DANGER!.\nYou Will be probation, If You Can't Improve Your Results\n";
    }
    else{
        cout<<"WARNING!!!\nYou Are Already In Probation.\n";
    }
}

void Others :: Help(){
    int X;
    cout<<"\n\nThis List Only For Dept. of Computer Science & Engineering.\n";
    do
    {
        cout<<"Who Is Your Advisor?\nSelect his/her Name.\n";
        cout<<"\n01: Dr. Shamim H Ripon.";
        cout<<"\n02: Dr. Mozammel Haq Azad Khan.";
        cout<<"\n03: Dr. Taskeed Jabid.";
        cout<<"\n04: K. M. Imtiaz-Ud-Din.";
        cout<<"\n05: Md. Samsujjoha.";
        cout<<"\n06: Dr. Shamim Akhter.";
        cout<<"\n07: Dr. Md. Nawab Yousuf Ali.";
        cout<<"\n08: Maheen Islam.";
        cout<<"\n09: Dr. Shaikh Muhammad Allayear.";
        cout<<"\n10: Dr. Muhammad Rezwanul Huq.";
        cout<<"\n11: Sazia Mahfuz.";
        cout<<"\n12: Farzia Karim.";
        cout<<"\n13: Shaila Sharmeen.";
        cout<<"\n14: Fahmida Azmi.";
        cout<<"\n15: Back to your Profile.\n\n";
        cout<<"\nSelect Your Advisor : ";

        cin>>X;
        switch(X)
        {
        case 1:
            cout<<"\n\nChairperson & Associate Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail : dshr@ewubd.edu \nURL : http://ewubd.edu/~dshr\n"
                <<"\nRoom No : 642\n\n";
            break;
        case 2:
            cout<<"\n\nProfessor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail : mhakhan@ewubd.edu \nURL : http://www.ewubd.edu/~mhakhan\n"
                <<"\nRoom No : 641\n\n";
            break;
        case 3:
            cout<<"\n\nAssistant Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail : taskeed@ewubd.edu\nURL : http://www.ewubd.edu/~taskeed\n"
                <<"\nRoom No : 640\n\n";
            break;
        case 4:
            cout<<"\n\nSenior Lecturer,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  kmimtiaz@ewubd,edu\nURL : http://www.ewubd.edu/~kmimtiaz\n"
                <<"\nRoom No : 640\n\n";
            break;
        case 5:
            cout<<"\n\nLecturer,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  msj@ewubd.edu\nURL : http://www.ewubd.edu/~msj\n"
                <<"\nRoom No : 644\n\n";
            break;
        case 6:
            cout<<"\n\nAssistant Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  shamimakhter@ewubd.edu\nURL : http://www.ewubd.edu/~shamimakhter\n"
                <<"\nRoom No : 644\n\n";
            break;
        case 7:
            cout<<"\n\nAssociate Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  nawab@ewubd.edu\nURL : http://www.ewubd.edu/~nawab\n"
                <<"\nRoom No : 646\n\n";
            break;
        case 8:
            cout<<"\n\nAssistant Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  maheen@ewubd.edu\nURL : http://www.ewubd.edu/~maheen\n"
                <<"\nRoom No : 647\n\n";
            break;
        case 9:
            cout<<"\n\nAssistant Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  allayear@ewubd.edu\nURL : http://www.ewubd.edu/~allayear\n"
                <<"\nRoom No : 626\n\n";
            break;
        case 10:
            cout<<"\n\nAssistant Professor,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  mrhuq@ewubd.edu\nURL : http://www.ewubd.edu/~mrhuq\n"
                <<"\nRoom No : 626\n\n";
            break;
        case 11:
            cout<<"\n\nSenior Lecturer,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  msm@ewubd.edu\nURL : http://www.ewubd.edu/~msm\n"
                <<"\nRoom No : 629\n\n";
            break;
        case 12:
            cout<<"\n\nLecturer,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  farzia@ewubd.edu\nURL : http://www.ewubd.edu/~farzia\n"
                <<"\nRoom No : 629\n\n";
            break;
        case 13:
            cout<<"\n\nSenior Lecturer,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  ssharmeen@ewubd.edu\nURL : http://www.ewubd.edu/~ssharmeen\n"
                <<"\nRoom No : 628\n\n";
            break;
        case 14:
            cout<<"\n\nLecturer,Dept. of Computer Science & Engineering.\n\n"
                <<"\nEmail :  fazmi@ewubd.edu\nURL : http://www.ewubd.edu/~fazmi\n"
                <<"\nRoom No : 628\n\n";
            break;
        case 15:
            break;
        default :cout<<"Error! Try again.\n";
        }
    }while(X!=15);
}

void Others::Department_Help(){
    int X;
    do
    {
    cout<<"Which Department.\n";
    cout<<"\n01: Department of Applied Statistics";
    cout<<"\n02: Department of Business Administration";
    cout<<"\n03: Department of Business Administration, MBA/EMBA/MBM Programs";
    cout<<"\n04: Department of Computer Science & Engineering";
    cout<<"\n05: Department of Economics";
    cout<<"\n06: Department of Electrical & Electronic Engineering";
    cout<<"\n07: Department of Electronics and Communications Engineering";
    cout<<"\n08: Department of English";
    cout<<"\n09: Department of Genetic Engineering and Biotechnology";
    cout<<"\n10: Department of Law";
    cout<<"\n11: Department of Pharmacy";
    cout<<"\n12: Department of Social Relations";
    cout<<"\n13: Back to Your Profile.";
    cout<<"\nPlease Select Your Department : ";
    cin>>X;
        switch(X)
        {
        case 1:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 2:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 3:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 4:
            Help();
            break;
        case 5:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 6:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 7:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 8:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 9:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 10:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 11:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 12:
            cout<<"\n\nERROR! Funtions Is Not Create Yet.\n\n";
            break;
        case 13:
            break;
        default :cout<<"Error in input. Try again\n";
        }
    }while(X!=13);

}

class login : public Student_Info,public Others{
public:
    void Login();
    void Show_Details();
    void Profile();
    void Edit();
};

void login:: Login(){
    char uname[20];
    char pass[20];
    int i,n;

    cout<<"Enter Your User Name : ";
    fflush(stdin);
    cin>>uname;
    fflush(stdin);
    cout<<"Enter Your Password  : ";
    cin>>pass;
    fflush(stdin);

    FILE *fp;

    fp=fopen("student number.txt","r");
    if(fp!=NULL){
    fscanf(fp,"%d",&n);
    }
    else{
        n=0;
    }

    fclose(fp);

    fp=fopen("registration.txt","r");

    for(i=0;i<n;i++){
        fscanf(fp,"%s",Name);
        fscanf(fp,"%s",ID);
        fscanf(fp,"%s",Department);
        fscanf(fp,"%s",SContact);
        fscanf(fp,"%s",Email);
        fscanf(fp,"%s",Father_Name);
        fscanf(fp,"%s",FContact_Number);
        fscanf(fp,"%s",Mother_Name);
        fscanf(fp,"%s",Guardian_Name);
        fscanf(fp,"%s",GContact_Number);
        fscanf(fp,"%s",User_Name);
        fscanf(fp,"%s",Password);

        int ucount=0;
        int pcount=0;
        if(strcmp(uname,User_Name)==0){
            ucount++;
            if(strcmp(pass,Password)==0){
                pcount++;
                fp=fopen("nth student.txt","w");

                fprintf(fp,"%d\n",i);

                fclose(fp);

                system("cls");
                Profile();
            }
            else {
                system("cls");
                cout<<"Password Mismatch\n";
                Login();
            }
        }
        else{
            cout<<"User Name Not Match.\n";
        }
    }
    fclose(fp);
        if(strcmp(uname,User_Name)!=0){
            cout<<"User Name Incorrect.\n\n"<<endl;
            system("cls");
        }
        //else{
            //cout<<"FILE Not Found Or Something Error.\n\n";
        //}

}

void login:: Profile(){
    int y;
    do                                      //do.....while loop
    {
    cout<<"\nChoose an Option."
        <<"\nEnter appropriate number..\n";

        cout<<"\n      PROFILE\n";
        cout<<"**********************"<<endl;
        cout<<"\n1: Student Course.";
        cout<<"\n2: Student Details.";
        cout<<"\n3: Edit Details.";
        cout<<"\n4: CGPA Calculator.";
        cout<<"\n5: Course Chart.";
        cout<<"\n6: Help.";
        cout<<"\n7: Log Out.";
        cout<<"\n\nOption: ";

        cin>>y;
        switch(y)
        {
        case 1:
            cout<<"\n\nFuntions Is Not Create Yet.\n\n";
            break;
        case 2:
            Show_Details();
            break;
        case 3:
            cout<<"Press 0 to back to your Profile.\n"<<endl;
            Edit();
            break;
        case 4:
            CGPA();
            break;
        case 5:
            Chart();
            break;
        case 6:
            Department_Help();
            break;
        case 7: //exit(0);
            break;
        default:
            cout<<"ERROR..! Try Again According to Menu.\n";
        }
    }while(y!=7);
}

void login :: Show_Details(){

    int i,n;

    FILE *fp;

    fp=fopen("nth student.txt","r");
    if(fp!=NULL){
        fscanf(fp,"%d",&n);
    }
    else{
        n=0;
    }
    fclose(fp);

    fp=fopen("registration.txt","r");

    for(i=0;i==n;i++){
        fscanf(fp,"%s",Name);
        fscanf(fp,"%s",ID);
        fscanf(fp,"%s",Department);
        fscanf(fp,"%s",SContact);
        fscanf(fp,"%s",Email);
        fscanf(fp,"%s",Father_Name);
        fscanf(fp,"%s",FContact_Number);
        fscanf(fp,"%s",Mother_Name);
        fscanf(fp,"%s",Guardian_Name);
        fscanf(fp,"%s",GContact_Number);
        fscanf(fp,"%s",User_Name);
        fscanf(fp,"%s",Password);
        }

        fclose(fp);

        cout<<"Name             : "<<Name<<"\n";
        cout<<"ID               : "<<ID<<"\n";
        cout<<"Department       : "<<Department<<"\n";
        cout<<"Student Contact  : "<<SContact<<"\n";
        cout<<"Email            : "<<Email<<"\n";
        cout<<"Father Name      : "<<Father_Name<<"\n";
        cout<<"Father Contact   : "<<FContact_Number<<"\n";
        cout<<"Mother Name      : "<<Mother_Name<<"\n";
        cout<<"Guardian Name    : "<<Guardian_Name<<"\n";
        cout<<"Guardian Contact : "<<GContact_Number<<"\n";

}

void login :: Edit(){

    int student,n,i,choice;

    FILE *fp;

    fp=fopen("student number.txt","r");
    fscanf(fp,"%d",&n);
    fclose(fp);

    fp=fopen("nth student.txt","r");
    fscanf(fp,"%d",&student);
    fclose(fp);

    fp=fopen("registration.txt","r");

    for(i=0;i==student;i++){
            if(i==student){
                fscanf(fp,"%s",Name);
                fscanf(fp,"%s",ID);
                fscanf(fp,"%s",Department);
                fscanf(fp,"%s",SContact);
                fscanf(fp,"%s",Email);
                fscanf(fp,"%s",Father_Name);
                fscanf(fp,"%s",FContact_Number);
                fscanf(fp,"%s",Mother_Name);
                fscanf(fp,"%s",Guardian_Name);
                fscanf(fp,"%s",GContact_Number);
                fscanf(fp,"%s",User_Name);
                fscanf(fp,"%s",Password);
            }
    }

    fclose(fp);

    cout<<"1.Name                      : "<<Name;
    cout<<"\nEdit\n"<<endl;
    cout<<"2.ID                        : "<<ID;
    cout<<"\nEdit\n"<<endl;
    cout<<"3.Department                : "<<Department;
    cout<<"\nEdit\n"<<endl;
    cout<<"4.Student Contact           : "<<SContact;
    cout<<"\nEdit\n"<<endl;
    cout<<"5.Email                     : "<<Email;
    cout<<"\nEdit\n"<<endl;
    cout<<"6.Father Name               : "<<Father_Name;
    cout<<"\nEdit\n"<<endl;
    cout<<"7.Father Contact Number     : "<<FContact_Number;
    cout<<"\nEdit\n"<<endl;
    cout<<"8.Mother Name               : "<<Mother_Name;
    cout<<"\nEdit\n"<<endl;
    cout<<"9.Guardian Name             : "<<Guardian_Name;
    cout<<"\nEdit\n"<<endl;
    cout<<"10.Guardian Contact Number  : "<<GContact_Number;
    cout<<"\nEdit\n"<<endl;

    cin>>choice;
    fflush(stdin);

    switch(choice){
        case 1: cout<<"Name : ";
                cin>>Name;
                fflush(stdin);
                break;
        case 2: cout<<"ID : ";
                cin>>ID;
                fflush(stdin);
                break;
        case 3: cout<<"Department : ";
                cin>>Department;
                fflush(stdin);
                break;
        case 4: cout<<"Contract Number : ";
                cin>>SContact;
                fflush(stdin);
                break;
        case 5: cout<<"Email : ";
                cin>>Email;
                fflush(stdin);
                break;

        case 6: cout<<"Father's Name : ";
                cin>>Father_Name;
                fflush(stdin);
                break;
        case 7:
             cout<<"Father's Contract : ";
             cin>>FContact_Number;
             fflush(stdin);
             break;
        case 8:
            cout<<"Mother's Name : ";
            cin>>Mother_Name;
            fflush(stdin);
            break;
        case 9:
            cout<<"Guardian Name : ";
            cin>>Guardian_Name;
            fflush(stdin);
            break;
        case 10:
            cout<<"Contract Number : ";
            cin>>GContact_Number;
            fflush(stdin);
            break;
        default:
            cout<<"Error! Try Again...\n"<<endl;
    }

    fp=fopen("registration.txt","w");

    for(i=0;i==student;i++){
        if(i==student){
            fprintf(fp,"%s\n",Name);
            fprintf(fp,"%s\n",ID);
            fprintf(fp,"%s\n",Department);
            fprintf(fp,"%s\n",SContact);
            fprintf(fp,"%s\n",Email);
            fprintf(fp,"%s\n",Father_Name);
            fprintf(fp,"%s\n",FContact_Number);
            fprintf(fp,"%s\n",Mother_Name);
            fprintf(fp,"%s\n",Guardian_Name);
            fprintf(fp,"%s\n",GContact_Number);
            fprintf(fp,"%s\n",User_Name);
            fprintf(fp,"%s\n",Password);
            break;
        }
    }

    fclose(fp);

    system("cls");

}

class Main : public login{
public:
    void Main_Menu();
    void Time();
};

void Main::Time(){
    int d,e,f,a,b,c;
    time_t tk;
    struct tm *now;
    time(&tk);
    now=localtime(&tk);
    d=now->tm_mday;
    e=1+now->tm_mon;
    f=1900+now->tm_year;
    a=now->tm_hour;
    b=now->tm_min;
    c=now->tm_sec;
    cout<<"TIME : "<<a<<":"<<b<<" "<<endl;
    cout<<"                                                            DATE : "<<d<<"/"<<e<<"/"<<f<<endl;
}

void Main :: Main_Menu(){
    cout<<"                    EAST WEST UNIVERSITY             "<<endl;
    cout<<"        A/2 Jahurul Islam Avenue, Jahurul Islam City "<<endl;
    cout<<"              Aftabnagar, Dhaka-1212, Bangladesh     "<<endl;
    cout<<"                  Tel: 09666775577, 9858261          "<<endl;
    cout<<"                e-mail: admissions@ewubd.edu         "<<endl;
    cout<<"                 URL: http://www.ewubd.edu           "<<"\n\n"<<endl;

    Time();

    int x;
    do                                      //do.....while loop
    {
        cout<< "\nChoose an Option."
            <<"\nEnter Appropriate Number Or The System will Misbehave..\n";
            cout<<"\n1: Create New Account.";
            cout<<"\n2: Log In.";
            cout<<"\n3: Exit.";
            cout<<"\n\nOption: ";

            cin>>x;

             switch(x)
             {
                 case 1:
                     Registration();
                     break;
                 case 2:
                    Login();
                    break;
                 case 3:
                     cout << "\n\nTHANK YOU FOR USING THIS SYSTEM.\n\n\n";
                     break;
                 default :cout<<"Error in input. Try again.\n";
             }
        }while(x!=3);
}
int main(){
    system("color 11");
    Main X;
    X.Main_Menu();

    return 0;
}
