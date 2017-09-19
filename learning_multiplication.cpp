#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()

{
     int x[2],ans,countn=0,counto=0;
     time_t t;
     char c;
     do
    {
       srand(time(&t));
       x[0]=rand()%10;
       srand(x[0]);
       x[1]=rand()%10;
       cout<<"\n\nWhat is "<<x[0]<<"times "<<x[1]<<" ?\nANS: ";
       do
       {
          cin>>ans;
          if(ans!=(x[0]*x[1]))
          {
            switch ( rand() % 4 )
{
case 0:
cout << "No. Please try again.";
break;
case 1:
cout << "Wrong. Try once more.";
break;
case 2:
cout << "Don't give up!";
break;
case 3:
cout << "No. Keep trying.";
break;
}
              cout<<"\n \n";
              countn+=1;
       }
       }
       while(ans!=(x[0]*x[1]));
           if(ans==(x[0]*x[1]));
           {
               switch ( rand() % 4 )
{
case 0:
cout << "Very good!";
break;
case 1:
cout << "Excellent!";
break;
case 2:
cout << "Nice work!";
break;
case 3:
cout << "Keep up the good work!";
break;
}
              counto+=1;
             cout<<"\n\n\nDO YOU WANT TO CONTINUE?";
             cin>>c;
           }
           if(c=='N'||c=='n')
           {
           break;}
          }
          while(1);

          if ( static_cast< double > ( counto) / ( countn + counto ) < .75 )
{
cout << "Please ask your instructor for extra help." << endl;
return true;
}
else
{
    cout<<"Congratulations, you are ready to go to the next level!"<<endl;
//return false;
 }

 do
    {
       srand(time(&t));
       x[0]=rand()%100;
       srand(x[0]);
       x[1]=rand()%100;
       cout<<"\n\nWhat is "<<x[0]<<"times "<<x[1]<<" ?\nANS: ";
       do
       {
          cin>>ans;
          if(ans!=(x[0]*x[1]))
          {
            switch ( rand() % 4 )
{
case 0:
cout << "No. Please try again.";
break;
case 1:
cout << "Wrong. Try once more.";
break;
case 2:
cout << "Don't give up!";
break;
case 3:
cout << "No. Keep trying.";
break;
}
              cout<<"\n \n";
              countn+=1;
       }
       }
       while(ans!=(x[0]*x[1]));
           if(ans==(x[0]*x[1]));
           {
               switch ( rand() % 4 )
{
case 0:
cout << "Very good!";
break;
case 1:
cout << "Excellent!";
break;
case 2:
cout << "Nice work!";
break;
case 3:
cout << "Keep up the good work!";
break;
}
              counto+=1;
             cout<<"\n\n\nDO YOU WANT TO CONTINUE?";
             cin>>c;
           }
           if(c=='N'||c=='n')
           {
           break;}
          }
          while(1);

          if ( static_cast< double > ( counto) / ( countn + counto ) < .75 )
{
cout << "Please ask your instructor for extra help." << endl;
return true;
}
else
{
    cout<<"Congratulations, you are ready to go to the next level!"<<endl;
//return false;

 }
 do
    {
       srand(time(&t));
       x[0]=rand()%1000;
       srand(x[0]);
       x[1]=rand()%1000;
       cout<<"\n\nWhat is "<<x[0]<<"times "<<x[1]<<" ?\nANS: ";
       do
       {
          cin>>ans;
          if(ans!=(x[0]*x[1]))
          {
            switch ( rand() % 4 )
{
case 0:
cout << "No. Please try again.";
break;
case 1:
cout << "Wrong. Try once more.";
break;
case 2:
cout << "Don't give up!";
break;
case 3:
cout << "No. Keep trying.";
break;
}
              cout<<"\n \n";
              countn+=1;
       }
       }
       while(ans!=(x[0]*x[1]));
           if(ans==(x[0]*x[1]));
           {
               switch ( rand() % 4 )
{
case 0:
cout << "Very good!";
break;
case 1:
cout << "Excellent!";
break;
case 2:
cout << "Nice work!";
break;
case 3:
cout << "Keep up the good work!";
break;
}
              counto+=1;
             cout<<"\n\n\nDO YOU WANT TO CONTINUE?";
             cin>>c;
           }
           if(c=='N'||c=='n')
           {
           break;}
          }
          while(1);

          if ( static_cast< double > ( counto) / ( countn + counto ) < .75 )
{
cout << "Please ask your instructor for extra help." << endl;
return true;
}
else
{
    cout<<"Congratulations, you are ready to go to the next level!"<<endl;
return false;
}
return 0;
}

