#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

//credit card points calculation
class visaCard{
    
   

    public:
     int points;
     string comp_name,name,card_num,purchase_type;
    float purchase_amt;


    visaCard(string comp_name,string name,string card_num,float purchase_amt,string puchase_type){
        this->comp_name=comp_name;
        this->name=name;
        this->card_num=card_num;
        this->purchase_amt=purchase_amt;
        this->purchase_type=puchase_type;

        if(comp_name=="VISA"||comp_name=="visa")
        {
            calculate_points(purchase_amt,purchase_type);
        }
        else if(comp_name=="HPVISA"||comp_name=="hpvisa")
        {
            calculate_points(purchase_amt,purchase_type);
        }
        else
        cout<<"Invalid choice"<<endl;
    }

    

  void calculate_points(float purchase_amt,string purchase_type){
       
        if(purchase_type=="Fuel"`)
            points=purchase_amt*0.01+10;       
       
        display_details(purchase_amt,purchase_type,points);
    }
            
    void display_details(float puchase_amt,string purchase_type,int points)
    {
        
        cout<<"Name: "<<name<<endl;
        cout<<"Card Number: "<<card_num<<endl;
        cout<<"Points: "<<points<<endl;
    }
};

class HPvisaCard:public visaCard{
    public:
        HPvisaCard(string comp_name,string name,string card_num,float purchase_amt,string puchase_type):visaCard(comp_name,name,card_num,purchase_amt,puchase_type){
            calculate_points(purchase_amt,purchase_type);
        }
};
int main()
{
    string comp_name,name,card_num;
    float purchase_amt;
    string purchase_type;
    cout<<"Enter the company name: ";
    cin>>comp_name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the card number: ";
    cin>>card_num;
    cout<<"Enter the purchase amount: ";
    cin>>purchase_amt;
    cout<<"Enter the purchase type: ";
    cin>>purchase_type;
    visaCard v(comp_name,name,card_num,purchase_amt,purchase_type);
    HPvisaCard h(comp_name,name,card_num,purchase_amt,purchase_type);
    return 0;

}