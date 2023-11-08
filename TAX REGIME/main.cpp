#include <iostream>

using namespace std;

int main()
{
    float taxableamount,balance,tax=0;
    cout<<"Enter amount earned                        :KES ";
    cin>>taxableamount;
    if (taxableamount>=500 && taxableamount<=10000)
    {
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Taxable amount declared for the month is   :KES "<<taxableamount<<endl;
        cout<<"Deductible tax for the month is            :KES "<<tax << endl;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Net earning for the month is               :KES "<<taxableamount;
    }
    else if (taxableamount>=10001 && taxableamount<=20000)
    {
       tax=taxableamount*0.02;
       balance=taxableamount-tax;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Taxable amount declared for the month is   :KES "<<taxableamount<<endl;
        cout<<"Deductible tax for the month is            :KES "<<tax << endl;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Net earning for the month is               :KES "<<balance;
    }
    else if (taxableamount>=20001 && taxableamount<=40000)
    {
      tax=taxableamount*0.05;
       balance=taxableamount-tax;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Taxable amount declared for the month is   :KES "<<taxableamount<<endl;
        cout<<"Deductible tax for the month is            :KES "<<tax << endl;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Net earning for the month is               :KES "<<balance;
    }
    else if (taxableamount>=40001 && taxableamount<=999999)
        {
      tax=taxableamount*0.30;
       balance=taxableamount-tax;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Taxable amount declared for the month is   :KES "<<taxableamount<<endl;
        cout<<"Deductible tax for the month is            :KES "<<tax << endl;
        cout<<"-----------------------------------------------------"<< endl;
        cout<<"Net earning for the month is               :KES "<<balance;
    }
    else
    {
     cout<<"-----------------------------------------------------------"<< endl;
     cout<<"THE FEDERAL AGENCY FOR REVENUE REVIEW HAS TERMINATED"<<endl;
     cout<<"THIS ACCOUNT FOR SUSPICIOUS  ECONOMIC ACTIVITY.VISIT"<<endl;
     cout<<"THE NEAREST POLICE UNIT FOR INQUIRY AND FURTHER MEASURES"<<endl;
     cout<<"-----------------------------------------------------------"<< endl;
    }

    return 0;
}
