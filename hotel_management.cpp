#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    //now we create variables that stores the quantity of items present in the hotel
    int qrooms=0,qpasta=0,qburgers=0,qnoodles=0,qshake=0,qchicken=0;
    //also create the variables that holds the value of number of items that have been sold out!!
    int srooms=0,spasta=0,sburgers=0,snoodles=0,sshake=0,schicken=0;
    //also declares the variables that stores the total price of each of the food items
    int total_rooms=0,total_pasta=0, total_burgers=0,total_noodles=0,total_shakes=0,total_chicken=0;

    cout<<"\n\t quantity we have";
    cout<<"rooms avialable";
    cin>>qrooms;
    cout<<"quantity of pasta avialabe";
    cin>>qpasta;
    cout<<"quantity of burgers ";
    cin>>qburgers;
    cout<<"quantity of noodles";
    cin>>qnoodles;
    cout<<"quantity of shake";
    cin>>qshake;
    cout<<"quantity of chicken";
    cin>>qchicken;
    m:
    cout<<"\n\t\t\t\t please select from the menu";
    cout<<"\n\n1.rooms";
    cout<<"\n2.pasta";
    cout<<"\n3.burgers";
    cout<<"\n4.noodles";
    cout<<"\n5.shake";
    cout<<"\n6.chicken";
    cout<<"\n7.information regarding sells and collections";
    cout<<"\n8.exit";

    cout<<"\n\nplease select any choice you want";
    cin>>choice;

      switch(choice){


        case 1:cout<<"\nenter how many rooms do you want";
        cin>>quant;
        if(qrooms-srooms>=quant)
        {
            srooms=srooms+quant;
            total_rooms=total_rooms+quant*1000;
            cout<<"\n\n\t\t"<<quant<<"rooms are alloted for you";
        }
        else
            cout<<"only"<<qrooms-srooms<<"are avialable";
            break;
             case 2:cout<<"\nenter how many pastas do you want";
        cin>>quant;
        if(qpasta-spasta>=quant)
        {
            spasta=spasta+quant;
            total_pasta=total_pasta+quant*100;
            cout<<"\n\n\t\t"<<quant<<"pasta are ordered for you";
        }
        else
            cout<<"only"<<qpasta-spasta<<"are avialable";
            break;
             case 3:cout<<"\nenter how many burgers do you want";
        cin>>quant;
        if(qburgers-sburgers>=quant)
        {
            sburgers=sburgers+quant;
            total_burgers=total_burgers+quant*150;
            cout<<"\n\n\t\t"<<quant<<"burgers are ordered for you";
        }
        else
            cout<<"\nonly"<<qburgers-sburgers<<"\tare avialable";
            break;
             case 4:cout<<"\nenter how many noodles do you want";
        cin>>quant;
        if(qnoodles-snoodles>=quant)
        {
            snoodles=snoodles+quant;
            total_noodles=total_noodles+quant*1000;
            cout<<"\n\n\t\t"<<quant<<"noodles are ordered for you";
        }
        else
            cout<<"\nonly"<<qnoodles-snoodles<<"\tare avialable";
            break;
             case 5:cout<<"\nenter how many shakes do you want";
        cin>>quant;
        if(qshake-sshake>=quant)
        {
            sshake=sshake+quant;
            total_shakes=total_shakes+quant*1000;
            cout<<"\n\n\t\t"<<quant<<"\tshakes are alloted for you";
        }
        else
            cout<<" \nsorry only"<<qshake-sshake<<"\tare avialable";
            break;
             case 6:cout<<"\nenter how many chicken roll do you want";
        cin>>quant;
        if(qchicken-schicken>=quant)
        {
            schicken=schicken+quant;
            total_chicken=total_chicken+quant*500;
            cout<<"\n\n\t\t"<<quant<<"chicken roll are alloted for you";
        }
        else
            cout<<"\nonly"<<qchicken-schicken<<"\tare avialable";
            break;
            case 7:
                     
                     cout<<"\n\ndetails of sells and cllections;";
                     cout<<"\nnumber of room we had:"<<qrooms<<endl;
                     cout<<"\nnumber of room we rented:"<<srooms<<endl;
                     cout<<"\nnumber of remaining rooms:"<<qrooms-srooms<<endl;
                     cout<<"\ntotal collection of rooms for the day:"<<total_rooms<<endl;


                      cout<<"number of pasta we had:"<<qpasta<<endl;
                     cout<<"number of pasta we ordered:"<<spasta<<endl;
                     cout<<"number of remaining pasta:"<<qpasta-spasta<<endl;
                     cout<<"total collection of pasta for the day:"<<total_pasta<<endl;

                     cout<<"number of burger we had:"<<qburgers<<endl;
                     cout<<"number of burger we rented:"<<sburgers<<endl;
                     cout<<"number of remaining burgers:"<<qburgers-sburgers<<endl;
                     cout<<"total collection of burgers for the day:"<<total_burgers<<endl;
 
                      cout<<"number of noodles we had:"<<qnoodles<<endl;
                     cout<<"number of noodles we rented:"<<snoodles<<endl;
                     cout<<"number of remaining noodles:"<<qnoodles-snoodles<<endl;
                     cout<<"total collection of noodles for the day:"<<total_noodles<<endl;


                      cout<<"number of shakes we had:"<<qshake<<endl;
                     cout<<"number of shakes we rented:"<<sshake<<endl;
                     cout<<"number of remaining shakes:"<<qshake-sshake<<endl;
                     cout<<"total collection of shake for the day:"<<total_shakes<<endl;

                      cout<<"number of chicken roll we had:"<<qchicken<<endl;
                     cout<<"number of chicken we ordered:"<<schicken<<endl;
                     cout<<"number of remaining chicken roll:"<<qchicken-schicken<<endl;
                     cout<<"total collection of chicken roll for the day:"<<total_chicken<<endl;
                     cout<<"\n\n\n\ntotal collection of day:"<<total_rooms+total_pasta+total_burgers+total_noodles+total_shakes+total_chicken;
                     break;
                     case 8:cout<<"\n thank you for visiting!!";
                      exit(0);
                     default: cout<<"\n please select as mentioned above";
    
      }
      goto m;
}