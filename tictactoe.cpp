#include<iostream>
using namespace std;

char matrix[3][3];
int location[3][3]={1,2,3,4,5,6,7,8,9};
char player1[20];
char player2[20];
int startpoint;


void initmatrix()
{
for(int i=0;i<3;i++)     
{
        for(int j=0;j<3;j++)
        {
                matrix[i][j]=' ';         
                }
        }
}

//DISPLAY

void playernames()
{
cout<<"Enter name : Player 1 :"<<endl;     
cin>>player1;

cout<<"Enter name : Player 2 :"<<endl;     
cin>>player2;
     
     
}

void displaymatrix()
{
                cout<<"------";
                cout<<"\n";
for(int i=0;i<3;i++)     
{
        for(int j=0;j<3;j++)
        {
                cout<<matrix[i][j]<<"|";         
                }
                cout<<"\n";
                cout<<"------";
                cout<<"\n";
        }
}



//INITIAL DISPLAY


void initialdisplay()
{
                cout<<"------";
                cout<<"\n";
for(int i=0;i<3;i++)     
{
        for(int j=0;j<3;j++)
        {
                cout<<location[i][j]<<"|";         
                }
                cout<<"\n";
                cout<<"------";
                cout<<"\n";
        }
}


//USER MOVE 


void usermove()
{
 int pos,i,j;
 m:
 cout<<"Enter position where you want to place cross"<<endl;
 cin>>pos;
 switch(pos)
 {
            case 1:
                 {
                        i=0;
                        j=0;
                       break;
                       }                 
            

            case 2:
                 {
                        i=0;
                        j=1;
                       break;
                       }                 

            case 3:
                 {
                        i=0;
                        j=2;
                       break;
                       }                 

            case 4:
                 {
                        i=1;
                        j=0;
                       break;
                       }                 

            case 5:
                 {
                        i=1;
                        j=1;
                       break;
                       }                 

            case 6:
                 {
                        i=1;
                        j=2;
                       break;
                       }                 

            case 7:
                 {
                        i=2;
                        j=0;
                       break;
                       }                 

            case 8:
                 {
                        i=2;
                        j=1;
                       break;
                       }                 

            case 9:
                 {
                        i=2;
                        j=2;
                       break;
                       }                 

                       default:
                               {
                                         cout<<"Invalid position"<<endl;
                                         goto m;
                                         }
                        }

 if(matrix[i][j]==' ')
 {matrix[i][j]='X';}
 else
     {
     cout<<"position occupied.choose another position"<<endl;
     goto m;                   
          }
          
}





void user2move()
{
 int pos,i,j;
 m:
 cout<<"Enter position where you want to place zero"<<endl;
 cin>>pos;
 switch(pos)
 {
            case 1:
                 {
                        i=0;
                        j=0;
                       break;
                       }                 
            

            case 2:
                 {
                        i=0;
                        j=1;
                       break;
                       }                 

            case 3:
                 {
                        i=0;
                        j=2;
                       break;
                       }                 

            case 4:
                 {
                        i=1;
                        j=0;
                       break;
                       }                 

            case 5:
                 {
                        i=1;
                        j=1;
                       break;
                       }                 

            case 6:
                 {
                        i=1;
                        j=2;
                       break;
                       }                 

            case 7:
                 {
                        i=2;
                        j=0;
                       break;
                       }                 

            case 8:
                 {
                        i=2;
                        j=1;
                       break;
                       }                 

            case 9:
                 {
                        i=2;
                        j=2;
                       break;
                       }                 

                       default:
                               {
                                         cout<<"Invalid position"<<endl;
                                         goto m;
                                         }
                        }

 if(matrix[i][j]==' ')
 {matrix[i][j]='O';}
 else
     {
     cout<<"position occupied.choose another position"<<endl;
     goto m;                   
          }
          
}






//CHECK

int check()

{
           //check row wise
int flag=0;             
     if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
     {cout<<"YOU WIN . CONGRATULATIONS "<<endl;flag=1;}

     if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;flag=1;}             
     
     if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;             flag=1;}
     
     if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
{     cout<<"YOU LOSE"<<endl;flag=1;}

     if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
{     cout<<"YOU LOSE"<<endl;             flag=1;}
     
     if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
{     cout<<"YOU LOSE"<<endl;             flag=1;}


     //check column wise

     if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;flag=1;}

     if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;             flag=1;}
     
     if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;             flag=1;}
     
     if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
{     cout<<"YOU LOSE"<<endl;flag=1;}

     if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
{     cout<<"YOU LOSE"<<endl;             flag=1;}
     
     if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
{     cout<<"YOU LOSE"<<endl;             flag=1;}


//check diagonals

     if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
{     cout<<"YOU LOSE"<<endl;flag=1;}
     if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
{     cout<<"YOU LOSE"<<endl;flag=1;}
     if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;flag=1;}
     if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
{     cout<<"YOU WIN . CONGRATULATIONS "<<endl;flag=1;}
if(flag==0)
{
    if(matrix[0][0]!=' ' && matrix[0][1]!=' ' && matrix[0][2]!=' ' && matrix[1][0]!=' ' && matrix[1][1]!=' ' && matrix[1][2]!=' ' && matrix[2][0]!=' ' && matrix[2][1]!=' ' && matrix[2][2]!=' ')
{     cout<<"GAME DRAW"<<endl;flag=1;}}

if(flag==1)
return -1;
}





int check2()

{
           //check row wise
int flag=0;             
     if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
     {cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;flag=1;}

     if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;flag=1;}             
     
     if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;             flag=1;}
     
     if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
{     cout<<player2<<" YOU WIN . CONGRATULATIONS"<<endl;flag=1;}

     if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
{     cout<<player2<<" YOU WIN . CONGRATULATIONS"<<endl;             flag=1;}
     
     if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
{     cout<<player2<<" YOU WIN . CONGRATULATIONS"<<endl;             flag=1;}


     //check column wise

     if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;flag=1;}

     if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;             flag=1;}
     
     if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;             flag=1;}
     
     if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
{     cout<<player2<<" YOU WIN"<<endl;flag=1;}

     if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
{     cout<<player2<<" YOU WIN"<<endl;             flag=1;}
     
     if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
{     cout<<player2<<"YOU WIN"<<endl;             flag=1;}


//check diagonals

     if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
{     cout<<player2<<" YOU WIN . CONGRATULATIONS"<<endl;flag=1;}
     if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
{     cout<<player2<<" YOU WIN . CONGRATULATIONS"<<endl;flag=1;}
     if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;flag=1;}
     if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
{     cout<<player1<<" YOU WIN . CONGRATULATIONS "<<endl;flag=1;}
if(flag==0)
{
    if(matrix[0][0]!=' ' && matrix[0][1]!=' ' && matrix[0][2]!=' ' && matrix[1][0]!=' ' && matrix[1][1]!=' ' && matrix[1][2]!=' ' && matrix[2][0]!=' ' && matrix[2][1]!=' ' && matrix[2][2]!=' ')
{     cout<<"GAME DRAW"<<endl;flag=1;}}

if(flag==1)
return -1;
}





//computer move


void computermove()
{
int i,j,pole=0;
//winning more imp

//row
if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='O' && matrix[i][j+1]=='O' &&  matrix[i][j+2]==' ')
                     {
                     matrix[i][j+2]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
           break;
      }
      



}
if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j+1]=='O' && matrix[i][j+2]=='O' && matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }




}
if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='O' && matrix[i][j+2]=='O' && matrix[i][j+1]==' ')
                     {
                     matrix[i][j+1]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
//column
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i][j]=='O' && matrix[i+1][j]=='O' && matrix[i+2][j]==' ')
                     {
                     matrix[i+2][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i+1][j]=='O' && matrix[i+2][j]=='O' && matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }

}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i][j]=='O' && matrix[i+2][j]=='O' && matrix[i+1][j]==' ')
                     {
                     matrix[i+1][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
//diagonal
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='O' && matrix[i+1][j+1]=='O' && matrix[i+2][j+2]==' ')
                     {
                     matrix[i+2][j+2]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }

}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i+1][j+1]=='O' && matrix[i+2][j+2]=='O' && matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='O' && matrix[i+2][j+2]=='O' && matrix[i+1][j+1]==' ')
                     {
                     matrix[i+1][j+1]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j+2]=='O' && matrix[i+1][j+1]=='O' && matrix[i+2][j]==' ')
                     {
                     matrix[i+2][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i+2][j]=='O' && matrix[i+1][j+1]=='O' && matrix[i][j+2]==' ')
                     {
                     matrix[i][j+2]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}      
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j+2]=='O' && matrix[i+2][j]=='O' && matrix[i+1][j+1]==' ')
                     {
                     matrix[i+1][j+1]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}

// STOPPING ENEMY FROM WINNING ALSO IMP  ..  A LITTLE BIT




//row
if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='X' && matrix[i][j+1]=='X' &&  matrix[i][j+2]==' ')
                     {
                     matrix[i][j+2]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
           break;
      }
      



}
if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j+1]=='X' && matrix[i][j+2]=='X' && matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }




}
if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='X' && matrix[i][j+2]=='X' && matrix[i][j+1]==' ')
                     {
                     matrix[i][j+1]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
//column
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i][j]=='X' && matrix[i+1][j]=='X' && matrix[i+2][j]==' ')
                     {
                     matrix[i+2][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i+1][j]=='X' && matrix[i+2][j]=='X' && matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }

}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i][j]=='X' && matrix[i+2][j]=='X' && matrix[i+1][j]==' ')
                     {
                     matrix[i+1][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
//diagonal
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='X' && matrix[i+1][j+1]=='X' && matrix[i+2][j+2]==' ')
                     {
                     matrix[i+2][j+2]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }

}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i+1][j+1]=='X' && matrix[i+2][j+2]=='X' && matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j]=='X' && matrix[i+2][j+2]=='X' && matrix[i+1][j+1]==' ')
                     {
                     matrix[i+1][j+1]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j+2]=='X' && matrix[i+1][j+1]=='X' && matrix[i+2][j]==' ')
                     {
                     matrix[i+2][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i+2][j]=='X' && matrix[i+1][j+1]=='X' && matrix[i][j+2]==' ')
                     {
                     matrix[i][j+2]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}      
if(pole==0)
{
     for(i=0;i<1;i++)
     {
             for(j=0;j<1;j++)
             {
                     if(matrix[i][j+2]=='X' && matrix[i+2][j]=='X' && matrix[i+1][j+1]==' ')
                     {
                     matrix[i+1][j+1]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}



//SPECIAL MOVE


if(pole==0)
{
           if(matrix[0][0]=='O' && matrix[2][0]==' ' && matrix[2][2]==' ' && matrix[1][0]==' ' && matrix[2][1]==' ')
           {
                                matrix[2][2]='O';
                                pole=1;
           }
           
}

if(pole==0)
{
           if(matrix[0][0]=='O' && matrix[2][0]==' ' && matrix[2][2]=='O' && matrix[1][0]==' ' && matrix[2][1]==' ')
           {
                                matrix[2][0]='O';
                                pole=1;
           }
           
}

// EACH SINGLE MOVE


// first position

if(pole==0)
{
           if(matrix[0][0]=='O' && matrix[0][1]==' ' && matrix[0][2]==' ')
           {
                                matrix[0][1]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[0][0]=='O' && matrix[1][0]==' ' && matrix[2][0]==' ')
           {
                                matrix[1][0]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[0][0]=='O' && matrix[1][1]==' ' && matrix[2][2]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}

//2nd position

if(pole==0)
{
           if(matrix[0][1]=='O' && matrix[0][0]==' ' && matrix[0][2]==' ')
           {
                                matrix[0][2]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[0][1]=='O' && matrix[1][1]==' ' && matrix[2][1]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}



//3rd position

if(pole==0)
{
           if(matrix[0][2]=='O' && matrix[0][0]==' ' && matrix[0][1]==' ')
           {
                                matrix[0][1]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[0][2]=='O' && matrix[1][2]==' ' && matrix[2][2]==' ')
           {
                                matrix[1][2]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[0][2]=='O' && matrix[1][1]==' ' && matrix[2][0]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}

//4th position

if(pole==0)
{
           if(matrix[1][0]=='O' && matrix[1][1]==' ' && matrix[1][2]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}


if(pole==0)
{
           if(matrix[1][0]=='O' && matrix[0][0]==' ' && matrix[2][0]==' ')
           {
                                matrix[2][0]='O';
                                pole=1;
           }           
           
}


//5th position

if(pole==0)
{
           if(matrix[1][1]=='O' && matrix[0][0]==' ' && matrix[2][2]==' ')
           {
                                matrix[0][0]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[1][1]=='O' && matrix[2][0]==' ' && matrix[0][2]==' ')
           {
                                matrix[2][0]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[1][1]=='O' && matrix[0][1]==' ' && matrix[2][1]==' ')
           {
                                matrix[0][1]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[1][1]=='O' && matrix[1][0]==' ' && matrix[1][2]==' ')
           {
                                matrix[1][0]='O';
                                pole=1;
           }           
           
}


//6th position

if(pole==0)
{
           if(matrix[1][2]=='O' && matrix[1][0]==' ' && matrix[1][1]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[1][2]=='O' && matrix[0][2]==' ' && matrix[2][2]==' ')
           {
                                matrix[0][2]='O';
                                pole=1;
           }           
           
}


//7th position

if(pole==0)
{
           if(matrix[2][0]=='O' && matrix[1][0]==' ' && matrix[0][0]==' ')
           {
                                matrix[1][0]='O';
                                pole=1;
           }           
           
}


if(pole==0)
{
           if(matrix[2][0]=='O' && matrix[2][1]==' ' && matrix[2][2]==' ')
           {
                                matrix[2][1]='O';
                                pole=1;
           }           
           
}


if(pole==0)
{
           if(matrix[2][0]=='O' && matrix[1][1]==' ' && matrix[0][2]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}


//8th position


if(pole==0)
{
           if(matrix[2][1]=='O' && matrix[2][0]==' ' && matrix[2][2]==' ')
           {
                                matrix[2][0]='O';
                                pole=1;
           }           
           
}


if(pole==0)
{
           if(matrix[2][1]=='O' && matrix[1][1]==' ' && matrix[0][1]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}


//9th position


if(pole==0)
{
           if(matrix[2][2]=='O' && matrix[2][0]==' ' && matrix[2][1]==' ')
           {
                                matrix[2][1]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[2][2]=='O' && matrix[1][2]==' ' && matrix[0][2]==' ')
           {
                                matrix[1][2]='O';
                                pole=1;
           }           
           
}

if(pole==0)
{
           if(matrix[2][2]=='O' && matrix[1][1]==' ' && matrix[0][0]==' ')
           {
                                matrix[1][1]='O';
                                pole=1;
           }           
           
}



//STARTING MOVE

if(matrix[0][0]==' ' && matrix[0][1]==' ' && matrix[0][2]==' ' && matrix[1][0]==' ' && matrix[1][1]==' ' && matrix[1][2]==' ' && matrix[2][1]==' ' && matrix[2][0]==' ' && matrix[2][2]==' ')
{
if(startpoint==1)
{matrix[0][0]='O';}                   

if(startpoint==2)
{matrix[0][2]='O';}

if(startpoint==3)
{matrix[1][1]='O';}

if(startpoint==4)
{matrix[2][0]='O';}

if(startpoint==5)
{matrix[2][2]='O';}                                                                            

if(startpoint==6)
{matrix[0][1]='O';}

if(startpoint==7)
{matrix[1][0]='O';}

if(startpoint==8)
{matrix[1][2]='O';}

if(startpoint==9)
{matrix[2][1]='O';}                                                                            

pole=1;                   
}



// LAST WORST CASE


if(pole==0)
{
     for(i=0;i<3;i++)
     {
             for(j=0;j<3;j++)
             {
                     if(matrix[i][j]==' ')
                     {
                     matrix[i][j]='O';
                     pole=1;
                     break;
                     }
             }
                     if(pole==1)
                     break;
      }
}





}









int main()
{
int n,who;
char ch;
p:
cout<<"Whom do u want to play against??"<<endl;
cout<<"1.Computer\n2.Human Opponent"<<endl;
cin>>n;

switch(n)
{
         case 1:
              {

r:
cout<<"Who should play first?"<<endl;
cout<<"1.You\n2.Computer"<<endl;
cin>>who;

if(who==1)
{
                           
initmatrix();
initialdisplay();

for(int k=0;k<5;k++)
{
usermove();
displaymatrix();
int c=check();
if(c==-1)
break;
computermove();
displaymatrix();
c=check();
if(c==-1)
break;
}
}

else if(who==2)
{
int num;
z:
cout<<"Enter a random number between 7 and 15:"<<endl;
cin>>num;
if(num<7 || num>15)
{
         cout<<"invalid entry"<<endl;
         goto z;
}
startpoint=num-6;

initmatrix();
initialdisplay();

for(int k=0;k<5;k++)
{
computermove();
displaymatrix();
int c=check();
if(c==-1)
break;
usermove();
displaymatrix();
c=check();
if(c==-1)
break;
}
}

else
{cout<<"invalid choice"<<endl;
goto r;}

break;
}

case 2:
     {
         playernames();
         initmatrix();

initialdisplay();

for(int k=0;k<5;k++)
{
usermove();
displaymatrix();
int c=check2();
if(c==-1)
break;
user2move();
displaymatrix();
c=check2();
if(c==-1)
break;         
}         
break;
}
default:
        {cout<<"Invalid choice"<<endl;}
        goto p;
        break;
}
g:
cout<<"Want to play another game?press y/n"<<endl;
cin>>ch;
if(ch=='y'||ch=='Y')
goto p;
else if(ch=='n'||ch=='N')
exit(0);
else
{cout<<"invalid choice"<<endl;
goto g;
}

/*
initmatrix();
initialdisplay();

for(int k=0;k<5;k++)
{
usermove();
displaymatrix();
int c=check();
if(c==-1)
break;
computermove();
displaymatrix();
c=check();
if(c==-1)
break;



}*/
system("pause");
return 0;

}
