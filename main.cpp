#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int option,option1,option2;
int i;
double deposit,cost,change,businessmoney,realbusinessmoney,managermoney,ownermoney,expenseP,expenseE;
string name,surname,statement;

struct Carwash
{
string name,surname,id,age;
int counter;
double deposit,cost,income,dailyProfit,weeklyProfit,monthlyProfit;
};

struct Carwash prop[4];

void newEmployee ()
{
cout<<"                      ***Add Employee***"<<endl;
cout<<""<<endl;
cout<<""<<endl;
   for(i=0;i<4;i++)
    {
        if(prop[i].name=="")
        {
            cout<<"Enter Employee Full Name's'"<<endl;
            cin>>prop[i].name;
            cout<<"Enter Employee Surname"<<endl;
            cin>>prop[i].surname;
            cout<<"Enter Employee ID"<<endl;
            cin>>prop[i].id;
            cout<<"Enter Employees AGE"<<endl;
            cin>>prop[i].age;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<" EMPLOYEE ADDED SUCCESSFULLY"<<endl;
        }
    }
system("PAUSE");
system("CLS");
}
void removeEmployee ()
{
cout<<"                      ***Remove Employee***"<<endl;
cout<<""<<endl;
cout<<"Enter Employee Full Name's'"<<endl;
cin>>name;
cout<<"Enter Employee Surname"<<endl;
cin>>surname;
   for(i=0;i<4;i++)
    {
        if(name == prop[i].name)
        {
            cout<<"Reason for removal..."<<endl;
            getline(cin,statement);
            prop[i].name="";
            prop[i].surname="";
            prop[i].id="";
            prop[i].age="";
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<" EMPLOYEE REMOVED SUCCESSFULLY"<<endl;
        }
    }
system("PAUSE");
system("CLS");
}

void seeEmployee ()
{
cout<<"                      ***Employees***"<<endl;
cout<<""<<endl;
cout<<" Currently Available Employees                   <99> Go back"<<endl;
cout<<""<<endl;
for(i=0;i<4;i++)
{
    cout<<"NAME :"<<prop[i].name<<"                   WEEKLY SALARY :R"<<prop[i].weeklyProfit<<endl;
    cout<<"SURNAME :"<<prop[i].surname<<endl;
    cout<<"ID :"<<prop[i].id<<"                   MONTHLY SALARY :R"<<prop[i].monthlyProfit<<endl;
    cout<<"AGE :"<<prop[i].age<<"                   NO. OF CARS WASHED :"<<prop[i].counter<<" cars"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void empPortal ()
{
do
{
cout<<"                      ***Employee Portal***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                              <99> Go back"<<endl;
cout<<""<<endl;
cout<<"  #1 RECRUIT EMPLOYEE(S)                    #2 REMOVE EMPLOYEE(S)"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                        #3 SHOW EMPLOYEES"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option;
system("PAUSE");
system("CLS");
    switch(option)
    {
    case 1:
        newEmployee();
        break;
    case 2:
        removeEmployee();
        break;
    case 3:
        seeEmployee();
        break;
    }
}
while(option!=99);
system("PAUSE");
system("CLS");
}

void empProgress ()
{
cout<<"                      ***Employee Progress Report***"<<endl;
cout<<""<<endl;
cout<<"                                                  <99> Go back"<<endl;
cout<<""<<endl;
for(i=0;i<4;i++)
{
    cout<<"NAME :"<<prop[i].name<<"                   WEEKLY SALARY :R"<<prop[i].weeklyProfit<<endl;
    cout<<"SURNAME :"<<prop[i].surname<<endl;
    cout<<"ID :"<<prop[i].id<<"                   MONTHLY SALARY :R"<<prop[i].monthlyProfit<<endl;
    cout<<"AGE :"<<prop[i].age<<"                   NO. OF CARS WASHED :"<<prop[i].counter<<" cars"<<endl;
    cout<<"                               Total Amount recieved by day:R"<<prop[i].deposit<<endl;
    cout<<"                               Total Amount sold by day :R"<<prop[i].cost<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void empSalary ()
{
cout<<"                      ***Employee Salaries Report***"<<endl;
cout<<""<<endl;
cout<<"                                                  <99> Go back"<<endl;
cout<<""<<endl;
for(i=0;i<4;i++)
{
    cout<<"NAME :"<<prop[i].name<<"                   DAILY SALARY :R"<<prop[i].dailyProfit<<endl;
    cout<<"SURNAME :"<<prop[i].surname<<"            WEEKLY SALARY :R"<<prop[i].weeklyProfit<<endl;
    cout<<""<<endl;
    cout<<"                                          MONTHLY SALARY :R"<<prop[i].monthlyProfit<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void businessSalary ()
{
cout<<"                      ***Business Salaries Report***"<<endl;
cout<<""<<endl;
cout<<"                                                  <99> Go back "<<endl;
cout<<"                DAY SALARY :R"<<businessmoney<<endl;
cout<<"            WEEKLY SALARY :R"<<businessmoney<<endl;
cout<<""<<endl;
cout<<"             MONTHLY SALARY :R"<<businessmoney<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void computebusinessSalary ()
{
    for(i=0;i<4;i++)
    {
     businessmoney=businessmoney+prop[i].deposit;
    }
}

void contractDetails ()
{
cout<<"                      ***Employee Contract Details***"<<endl;
cout<<""<<endl;
cout<<"                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<"  Thank you all Employees this business is your platform "<<endl;
cout<<"  to work in a very progressive environment"<<endl;
cout<<"  as we offer an exclusive contract that :"<<endl;
cout<<""<<endl;
cout<<"  ::employee receives minimum wage of 16.25% of money made per week,"<<endl;
cout<<"   prior to that the employee's' washes 1 car per day."<<endl;
cout<<""<<endl;
cout<<"  ::employee will receive full responsibility for loss/theft/damage of any particular"<<endl;
cout<<"   product or incident regarding"<<endl;
cout<<"   customer services offered by the rightful employee's'"<<endl;
cout<<""<<endl;
cout<<"  ::employee will not recieve compensation for absent days, thus will be deducted"<<endl;
cout<<"   from money made at end of week."<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                      ***Manager Contract Details***"<<endl;
cout<<""<<endl;
cout<<"  Thank you as a Manager this business is your platform "<<endl;
cout<<"  to work in a very progressive environment"<<endl;
cout<<"  as we offer an exclusive contract that :"<<endl;
cout<<""<<endl;
cout<<"  ::manager receives minimum wage of 16.25% of money made per week,"<<endl;
cout<<"   prior to that the manager supervises employee's' productivity,incoming transactions,"<<endl;
cout<<"   replacement of depleted products and business expenses"<<endl;
cout<<""<<endl;
cout<<"  ::manager will receive full responsibility for loss/theft/damage of any particular"<<endl;
cout<<"   product or incident regarding"<<endl;
cout<<"   customer services offered by the rightful employee's'"<<endl;
cout<<""<<endl;
cout<<"  ::manager will not recieve compensation for absent days, thus will be reprimanded"<<endl;
cout<<"   as absenteeism will not be tolerated as a manager."<<endl;
cout<<"   in his/her line of duty."<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option1;
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void busProducts ()
{
do
{
cout<<"                      ***Business Products***"<<endl;
cout<<""<<endl;
cout<<"Select Stock-Out Products :                      <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" <1> R50  Leather seat polish             <2> R50  Tyre black polish"<<endl;
cout<<""<<endl;
cout<<" <3> R60  Dashbord spray                  <4> R60  Car Shampoo"<<endl;
cout<<""<<endl;
cout<<" <5> R50  Engine cleaner                  <6> R70  Window spray"<<endl;
cout<<""<<endl;
cout<<" <7> R50  Tyre gloss shine                <8> R60  Grease remover"<<endl;
cout<<""<<endl;
cout<<" <9> R50  Fabric carpet spray             <10> R50  Fragrance spray"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Total :R"<<expenseP<<endl;
cout<<""<<endl;
cin>>option2;
    switch(option2)
    {
    case 1:
        expenseP=expenseP+50;
        break;
    case 2:
        expenseP=expenseP+40;
        break;
    case 3:
        expenseP=expenseP+60;
        break;
    case 4:
        expenseP=expenseP+60;
        break;
    case 5:
        expenseP=expenseP+50;
        break;
    case 6:
        expenseP=expenseP+70;
        break;
    case 7:
        expenseP=expenseP+50;
        break;
    case 8:
        expenseP=expenseP+60;
        break;
    case 9:
        expenseP=expenseP+50;
        break;
    }
}
while(option2!=99);
system("PAUSE");
system("CLS");
}

void busEquipment ()
{
do
{
cout<<"                      ***Business Equipment***"<<endl;
cout<<""<<endl;
cout<<"Select to replace Equipment :                      <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" <1> R70  3in1 Micro-Fibre towels            <2> R50  Rims brush"<<endl;
cout<<""<<endl;
cout<<" <3> R50  Carpet brush                       <4> R60  3in1 Multi purpose Sponges"<<endl;
cout<<""<<endl;
cout<<" <5> R600 Karcher Window vacuum cleaner "<<endl;
cout<<""<<endl;
cout<<" <6> R50  Tyre brush"<<endl;
cout<<""<<endl;
cout<<" <7> R40  Saftey Gloves"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Total :R"<<expenseE<<endl;
cout<<""<<endl;
cin>>option2;
    switch(option2)
    {
    case 1:
        expenseE=expenseE+70;
        break;
    case 2:
        expenseE=expenseE+50;
        break;
    case 3:
        expenseE=expenseE+50;
        break;
    case 4:
        expenseE=expenseE+60;
        break;
    case 5:
        expenseE=expenseE+600;
        break;
    case 6:
        expenseE=expenseE+50;
        break;
    case 7:
        expenseE=expenseE+40;
        break;
    }
}
while(option2!=99);
system("PAUSE");
system("CLS");
}

void allExpenses ()
{
    realbusinessmoney=businessmoney-expenseP-expenseE;
do
{
cout<<"                      ***Equipment & Product Expenses***"<<endl;
cout<<""<<endl;
cout<<"                                                     <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"  Total Products :R"<<expenseP<<"               Total Equipment :R"<<expenseE<<endl;
cout<<""<<endl;
cout<<"            Total Business Salary :R"<<businessmoney<<endl;
cout<<""<<endl;
cout<<"            Actual Business Salary :R"<<realbusinessmoney<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option2;
}
while(option2!=99);
system("PAUSE");
system("CLS");
}

void busExpenses ()
{
do
{
cout<<"                      ***Business Expenses***"<<endl;
cout<<""<<endl;
cout<<"Select                                              <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"       [1] PRODUCT EXPENSES                       [2] EQUIPMENT EXPENSES"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                         [3] SHOW ALL EXPENSES "<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option1;
system("PAUSE");
system("CLS");
    switch(option1)
    {
    case 1:
        busProducts();
        system("PAUSE");
        system("CLS");
        break;
    case 2:
        busEquipment();
        system("PAUSE");
        system("CLS");
        break;
    case 3:
        allExpenses();
        system("PAUSE");
        system("CLS");
        break;
    }
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void managerPortal ()
{
do
{
cout<<"                      ***Manager Portal***"<<endl;
cout<<""<<endl;
cout<<"SELECT                                              <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"  1)SEE EMPLOYEES PROGRESS                      2)EMPLOYEE SALARIES"<<endl;
cout<<""<<endl;
cout<<"  3)BUSINESS SALARY                             4)SEE EMPLOYEE CONTRACT DETAILS"<<endl;
cout<<""<<endl;
cout<<"  5)BUSINESS EXPENSES                           6)Suggestions"<<endl;
cout<<""<<endl;
cout<<"  7)MANAGER'S SALARY                            8)Business plans"<<endl;
cout<<""<<endl;
cout<<"  9)COMPLAINTS"<<endl;
cout<<""<<endl;
cout<<"  11)OWNER'S MONTHLY EXPECTED SALARY"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option;
system("PAUSE");
system("CLS");
    switch(option)
    {
    case 1:
        empProgress();
        break;
    case 2:
        empSalary();
        break;
    case 3:
        businessSalary();
        break;
    case 4:
        contractDetails();
        break;
    case 5:
        busExpenses();
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 11:
        break;
    }
}
while(option!=99);
}

void displayPurchase ()
{
cout<<"                     ***Purchased***"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Total Amuont :R"<<deposit<<"          Cost :R"<<cost<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" Change :R"<<change<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option;
}
while(option!=99);
system("PAUSE");
system("CLS");
}

void computeStandard ()
{
cin>>option1;
switch(option1)
{
case 1:
do
{
cout<<" DEPOSIT CASH .."<<endl;
cin>>deposit;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>name;
}
while(deposit<30 && name!=prop[i].name);
    for(i=0;i<4;i++)
    {
    if(name==prop[i].name)
    {
    cost=30;
    change=deposit-cost;
    prop[i].deposit=prop[i].deposit+deposit;
    prop[i].cost=prop[i].cost+30;
    prop[i].counter++;
    prop[i].income=prop[i].income+30*0.15;
    managermoney=managermoney+30*0.15;
    ownermoney=ownermoney+30*0.15;
    businessmoney=businessmoney+prop[i].cost;
    }
    }
displayPurchase();
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 2:
do
{
cout<<" DEPOSIT CASH .."<<endl;
cin>>deposit;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>name;
}
while(deposit<30 && name!=prop[i].name);
    for(i=0;i<4;i++)
    {
    if(name==prop[i].name)
    {
    cost=30;
    change=deposit-cost;
    prop[i].deposit=prop[i].deposit+deposit;
    prop[i].cost=prop[i].cost+30;
    prop[i].counter++;
    prop[i].income=prop[i].income+30*0.15;
    managermoney=managermoney+30*0.15;
    ownermoney=ownermoney+30*0.15;
    businessmoney=businessmoney+prop[i].cost;
    }
    }
displayPurchase();
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 3:
do
{
cout<<" DEPOSIT CASH .."<<endl;
cin>>deposit;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>name;
}
while(deposit<50 && name!=prop[i].name);
    for(i=0;i<4;i++)
    {
    if(name==prop[i].name)
    {
    cost=50;
    change=deposit-cost;
    prop[i].deposit=prop[i].deposit+deposit;
    prop[i].cost=prop[i].cost+50;
    prop[i].counter++;
    prop[i].income=prop[i].income+50*0.15;
    managermoney=managermoney+50*0.15;
    ownermoney=ownermoney+50*0.15;
    businessmoney=businessmoney+prop[i].cost;
    }
    }
displayPurchase();
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
}
}

void computeTaxi ()
{
cin>>option1;
switch(option1)
{
case 1:
do
{
cout<<" DEPOSIT CASH .."<<endl;
cin>>deposit;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>name;
}
while(deposit<40 && name!=prop[i].name);
    for(i=0;i<4;i++)
    {
    if(name==prop[i].name)
    {
    cost=40;
    change=deposit-cost;
    prop[i].deposit=prop[i].deposit+deposit;
    prop[i].cost=prop[i].cost+40;
    prop[i].counter++;
    prop[i].income=prop[i].income+40*0.15;
    managermoney=managermoney+40*0.15;
    ownermoney=ownermoney+40*0.15;
    businessmoney=businessmoney+prop[i].cost;
    }
    }
displayPurchase();
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 2:
do
{
cout<<" DEPOSIT CASH .."<<endl;
cin>>deposit;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>name;
}
while(deposit<40 && name!=prop[i].name);
    for(i=0;i<4;i++)
    {
    if(name==prop[i].name)
    {
    cost=40;
    change=deposit-cost;
    prop[i].deposit=prop[i].deposit+deposit;
    prop[i].cost=prop[i].cost+40;
    prop[i].counter++;
    prop[i].income=prop[i].income+40*0.15;
    managermoney=managermoney+40*0.15;
    ownermoney=ownermoney+40*0.15;
    businessmoney=businessmoney+prop[i].cost;
    }
    }
displayPurchase();
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
case 3:
do
{
cout<<" DEPOSIT CASH .."<<endl;
cin>>deposit;
cout<<" Enter EMPLOYEES Name"<<endl;
cin>>name;
}
while(deposit<60 && name!=prop[i].name);
    for(i=0;i<4;i++)
    {
    if(name==prop[i].name)
    {
    cost=60;
    change=deposit-cost;
    prop[i].deposit=prop[i].deposit+deposit;
    prop[i].cost=prop[i].cost+60;
    prop[i].counter++;
    prop[i].income=prop[i].income+60*0.15;
    managermoney=managermoney+60*0.15;
    ownermoney=ownermoney+60*0.15;
    businessmoney=businessmoney+prop[i].cost;
    }
    }
displayPurchase();
cout<<""<<endl;
cout<<""<<endl;
do
{
cin>>option2;
}
while(option2!=99);
break;
}
}

void getStandard ()
{
cout<<"                      ***Standard***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                  <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  R30  CARWASH INTERIOR only"<<endl;
cout<<"                                                    <7>  R10  WINDSCREEN only"<<endl;
cout<<" <2>  R30  CARWASH EXTERIOR only"<<endl;
cout<<"                                                    <8>  R10  TYRES only"<<endl;
cout<<""<<endl;
cout<<"         <3>  R40  FULL BODY CARWASH"<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
computeStandard();
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void getTaxi ()
{
cout<<"                     ***Taxi***"<<endl;
cout<<""<<endl;
cout<<" SELECT                                                 <99> Go back"<<endl;
cout<<""<<endl;
cout<<" <1>  R50  CARWASH INTERIOR only"<<endl;
cout<<"                                                    <7>  R15  WINDSCREEN only"<<endl;
cout<<" <2>  R50  CARWASH EXTERIOR only"<<endl;
cout<<"                                                    <8>  R10  TYRES only"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"        <3>  R60  FULL BODY CARWASH"<<endl;
cout<<""<<endl;
cout<<""<<endl;
do
{
computeTaxi();
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void displayMenu ()
{
do
{
cout<<"                      ***CarWash Menu***"<<endl;
cout<<""<<endl;
cout<<"SELECT                                            <99> Go back"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<" [ 5 ]    STANDARD CAR                                   [ 7 ] TAXI "<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option1;
system("PAUSE");
system("CLS");
    switch(option1)
    {
    case 5:
        getStandard();
        break;
    case 7:
        getTaxi();
        break;
    }
}
while(option1!=99);
system("PAUSE");
system("CLS");
}

void displayPortal ()
{
do
{
cout<<"                        ***CARWASH BUSINESS***"<<endl;
cout<<""<<endl;
cout<<"SELECT"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"  ( 1 ) New Employee's' /                   ( 7 ) Manager Access"<<endl;
cout<<"          Remove Employee's'"<<endl;
cout<<""<<endl;
cout<<""<<endl;
cout<<"                       ( 9 ) CarWash Menu "<<endl;
cout<<""<<endl;
cout<<""<<endl;
cin>>option;
system("PAUSE");
system("CLS");
    switch(option)
    {
    case 1:
        empPortal();
        break;
    case 7:
        managerPortal();
        break;
    case 9:
        displayMenu();
        break;
    }
}
while(1);
}
int main ()
{
displayPortal();
return 0;
}

