#include<iostream>
using namespace std;

//Hotel Management Software By Mohib Memon

int main(){

    int quant;
    int choice;

    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qpizza=0;

    //Sold Items
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Spizza=0;

    //Total Price
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_pizza=0;

    //Quantity of items available
    cout<< "\n\t Quantity of items we have in hotel";
    
    //available rooms
    cout<< "\n Rooms Available:";
    cin>> Qrooms;

    //available pasta
    cout<< "\n Quantity Of Pasta Available:";
    cin>> Qpasta;

    //available burgers
    cout<< "\n Quantity Of Burgers Available:";
    cin>> Qburger;

    //available noodles
    cout<< "\n Quantity Of Noodles Available:";
    cin>> Qnoodles;

    //available pizzas
    cout<< "\n Quantity Of Pizzas Available:";
    cin>> Qpizza;

    //Menu
    menu:
    cout<< "\n\t\t\t Please select from the menu options";
    cout<< "\n\n1) Rooms";
    cout<< "\n2) Pasta";
    cout<< "\n3) Burger";
    cout<< "\n4) Noodles";
    cout<< "\n5) Pizza";
    cout<< "\n6) Information regarding sales and collection";
    cout<< "\n7 Exit";

    cout<< "\n\n Please enter your choice!";
    cin>>choice;

    //Switch Function
    switch(choice)
    {   

        //Rooms Functionality
        case 1:
        cout<< "Enter the number of rooms you want:";

        cin>>quant;
        if(Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms= Total_rooms+quant*1500;
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
        }
        else
        
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"rooms are available rightnow!";
            break;



        //Pasta Functionality
        case 2:
        cout<< "Enter Pasta Quantity:";

        cin>>quant;
        if(Qpasta-Spasta >=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta= Total_pasta+quant*500;
            cout<<"\n\n\t\t"<<quant<<"Pasta ordered successfully!";
        }
        else
        
            cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta are available rightnow!";
            break;


        //Burger Functionality
        case 3:
        cout<< "Enter Burger Quantity:";

        cin>>quant;
        if(Qburger-Sburger >=quant)
        {
            Sburger=Sburger+quant;
            Total_burger= Total_burger+quant*400;
            cout<<"\n\n\t\t"<<quant<<"Burger ordered successfully!";
        }
        else
        
            cout<<"\n\tOnly"<<Qburger-Sburger<<"burgers are available rightnow!";
            break;


        //Noodles Functionality
        case 4:
        cout<< "Enter Noodles Quantity:";

        cin>>quant;
        if(Qnoodles-Snoodles >=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= Total_noodles+quant*600;
            cout<<"\n\n\t\t"<<quant<<"Noodles ordered successfully!";
        }
        else
        
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles are available rightnow!";
            break;

        //Pizza Functionality
        case 5:
        cout<< "Enter Pizza Quantity:";

        cin>>quant;
        if(Qpizza-Spizza >=quant)
        {
            Spizza=Spizza+quant;
            Total_pizza= Total_pizza+quant*800;
            cout<<"\n\n\t\t"<<quant<<"Pizza ordered successfully!";
        }
        else
        
            cout<<"\n\tOnly"<<Qpizza-Spizza<<"pizza are available rightnow!";
            break; 

        
        //Information of sales & Collection
        case 6:

        //Rooms Information
        cout<<"\n\t\t Details of sales and collection";
        cout<<"\n\n Numbers of rooms we had :"<<Qrooms;
        cout<<"\n\n Numbers of rooms we sold :"<<Srooms;
        cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
        cout<< "\n\n Total rooms collection for the day :"<<Total_rooms;

        //Pasta Information
        cout<<"\n\n Numbers of pastas we had :"<<Qpasta;
        cout<<"\n\n Numbers of pastas we sold :"<<Spasta;
        cout<<"\n\n Remaining pastas :"<<Qpasta-Spasta;
        cout<< "\n\n Total pastas collection for the day :"<<Total_pasta;

        //Burgers Information
        cout<<"\n\n Numbers of burgers we had :"<<Qburger;
        cout<<"\n\n Numbers of burgers we sold :"<<Sburger;
        cout<<"\n\n Remaining burgers :"<<Qburger-Sburger;
        cout<< "\n\n Total burgers collection for the day :"<<Total_burger;

        //Noodles Information
        cout<<"\n\n Numbers of noodles we had :"<<Qnoodles;
        cout<<"\n\n Numbers of noodles we sold :"<<Snoodles;
        cout<<"\n\n Remaining noodles :"<<Qnoodles-Snoodles;
        cout<< "\n\n Total noodles collection for the day :"<<Total_noodles;

        //Pizzas Information
        cout<<"\n\n Numbers of pizzas we had :"<<Qpizza;
        cout<<"\n\n Numbers of pizzas we sold :"<<Spizza;
        cout<<"\n\n Remaining pizzas :"<<Qpizza-Spizza;
        cout<< "\n\n Total pizzas collection for the day \n:"<<Total_pizza;

        //Exit Function
        case 7:
            exit(0);

            cout<< "\n Please select the numbers mentioned above!";

    }
     goto menu;

}
