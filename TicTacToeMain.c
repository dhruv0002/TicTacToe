#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void print_board(int board[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%c\t",board[i][j]);
    }
    printf("\n");
  }
  
  
  
}

int winner(int board[3][3],int chance)//this define win condition and winner.
{
  int i,j,sum=0,win=0;
  
  i=0;
  j=0;
  
  while(i<3)
  {
    j=0;
    sum=0;
    while(j<3)
    {
      sum=sum+(int)board[i][j];
      j++;
    }
      if(sum==264||sum==237)
      {
        printf("PLAYER %d WIN!!! ",chance);
        return win=1;
      }
      else
      {
        i++;
      }
  }
  
  i=0;
  j=0;
  while(j<3)
  {
    i=0;
    sum=0;
    while(i<3)
    {
      sum=sum+(int)board[i][j];
      i++;
    }
      if(sum==264||sum==237)
      {
        printf("PLAYER %d WIN!!! ",chance);
        return win=1;
      }
      else
      {
        j++;
      }
  }
  
  i=0;
  j=0;
  sum=0;
  while(i<3)
  {
    sum=sum+(int)board[i][i];
    i++;
  }
  if(sum==264||sum==237)
  {
        printf("PLAYER %d WIN!!! ",chance);
        return win=1;
  }
  
  sum=0;
  for(i=0,j=2;i<=2 && j>=0;i++,j--)
  {
    sum=sum+(int)board[i][j];
  }
  if(sum==264||sum==237)
  {
        printf("PLAYER %d WIN!!! ",chance);
        return win=1;
  }
    
}

int winner_temp(int board[3][3])//this define win condition and winner.
{
  int i,j,sum=0,win=0;
  
  i=0;
  j=0;
  
  while(i<3)
  {
    j=0;
    sum=0;
    while(j<3)
    {
      sum=sum+(int)board[i][j];
      j++;
    }
      if(sum==264||sum==237)
      {
        return win=1;
      }
      else
      {
        i++;
      }
  }
  
  i=0;
  j=0;
  while(j<3)
  {
    i=0;
    sum=0;
    while(i<3)
    {
      sum=sum+(int)board[i][j];
      i++;
    }
      if(sum==264||sum==237)
      {
        return win=1;
      }
      else
      {
        j++;
      }
  }
  
  i=0;
  j=0;
  sum=0;
  while(i<3)
  {
    sum=sum+(int)board[i][i];
    i++;
  }
  if(sum==264||sum==237)
  {
        return win=1;
  }
  
  sum=0;
  for(i=0,j=2;i<=2 && j>=0;i++,j--)
  {
    sum=sum+(int)board[i][j];
  }
  if(sum==264||sum==237)
  {
        return win=1;
  }
    
}


void player1(int board[3][3],int ascii)
{
  int choice;
  printf("Where do you want to enter your move in board? : \n\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1 : board[0][0] = ascii;
         print_board(board);
         break;
    case 2 : board[0][1] = ascii;
         print_board(board);
         break;
    case 3 : board[0][2] = ascii;
         print_board(board);
         break;
    case 4 : board[1][0] = ascii;
         print_board(board);
         break;
    case 5 : board[1][1] = ascii;
         print_board(board);
         break;
    case 6 : board[1][2] = ascii;
         print_board(board);
         break;
    case 7 : board[2][0] = ascii;
         print_board(board);
         break;
    case 8 : board[2][1] = ascii;
         print_board(board);
         break;
    case 9 : board[2][2] = ascii;
         print_board(board);
         break;
    default : printf("You enterd wrong choice");
  }
}

void player2(int board[3][3],int ascii)
{
  int choice;
  printf("Where do you want to enter your move in board? : \n\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1 : board[0][0] = ascii;
         print_board(board);
         break;
    case 2 : board[0][1] = ascii;
         print_board(board);
         break;
    case 3 : board[0][2] = ascii;
         print_board(board);
         break;
    case 4 : board[1][0] = ascii;
         print_board(board);
         break;
    case 5 : board[1][1] = ascii;
         print_board(board);
         break;
    case 6 : board[1][2] = ascii;
         print_board(board);
         break;
    case 7 : board[2][0] = ascii;
         print_board(board);
         break;
    case 8 : board[2][1] = ascii;
         print_board(board);
         break;
    case 9 : board[2][2] = ascii;
         print_board(board);
         break;
    default : printf("You entered wrong choice");
  }
}

void computer(int board[3][3],int ascii,int ascii_other)
{  
  int i,j,sum,element[3][3],win=0;

//1  checking win
  
if(board[0][0]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[0][0]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[0][0]=ascii;
    print_board(board);
    return;
  }
}
  
//2
if(board[0][1]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[0][1]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[0][1]=ascii;
    print_board(board);
    return;
  }
}
//3
if(board[0][2]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[0][2]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[0][2]=ascii;
    print_board(board);
    return;
  }
}  
//4
if(board[1][0]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[1][0]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[1][0]=ascii;
    print_board(board);
    return;
  }
}
//5
if(board[1][1]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[1][1]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[1][1]=ascii;
    print_board(board);
    return;
  }
}
//6
if(board[1][2]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[1][2]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[1][2]=ascii;
    print_board(board);
    return;
  }
}
//7
if(board[2][0]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[2][0]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[2][0]=ascii;
    print_board(board);
    return;
  }
}
//8
if(board[2][1]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[2][1]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[2][1]=ascii;
    print_board(board);
    return;
  }
}
//9
if(board[2][2]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[2][2]=ascii;
  win=winner_temp(element);
  if(win==1)
  {
    board[2][2]=ascii;
    print_board(board);
    return;
  }
}
//1* checking win of other player
if(board[0][0]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[0][0]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[0][0]=ascii;
    print_board(board);
    return;
  }
}
//2*
if(board[0][1]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[0][1]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[0][1]=ascii;
    print_board(board);
    return;
  }
}
//3*
if(board[0][2]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[0][2]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[0][2]=ascii;
    print_board(board);
    return;
  }
}
//4*
if(board[1][0]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[1][0]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[1][0]=ascii;
    print_board(board);
    return;
  }
}
//5*
if(board[1][1]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[1][1]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[1][1]=ascii;
    print_board(board);
    return;
  }
}
//6*
if(board[1][2]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[1][2]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[1][2]=ascii;
    print_board(board);
    return;
  }
}
//7*
if(board[2][0]==66)
{
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[2][0]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[2][0]=ascii;
    print_board(board);
    return;
  }
}
//8*
if(board[2][1]==66)
{

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[2][1]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[2][1]=ascii;
    print_board(board);
    return;
  }
}
//9*
if(board[2][2]==66)
{

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      element[i][j]=board[i][j];
    }
    
  }
  
  element[2][2]=ascii_other;
  win=winner_temp(element);
  if(win==1)
  {
    board[2][2]=ascii;
    print_board(board);
    return;
  }
}
  if(board[1][1]==66)
  {
    board[1][1]=ascii;
    print_board(board);
    return;
  }
  else
  {
    //1**
    if(board[0][0]==66)
    {
      board[0][0]=ascii;
      print_board(board);
      return;
    }
    
    //2**
    if(board[0][1]==66)
    {
      board[0][1]=ascii;
      print_board(board);
      return;
    }
    
    //3**
    if(board[0][2]==66)
    {
      board[0][2]=ascii;
      print_board(board);
      return;
    }
    
    //4**
    if(board[1][0]==66)
    {
      board[1][0]=ascii;
      print_board(board);
      return;
    }
    
    //5**
    if(board[1][1]==66)
    {
      board[1][1]=ascii;
      print_board(board);
      return;
    }
    
    //6**
    if(board[1][2]==66)
    {
      board[1][2]=ascii;
      print_board(board);
      return;
    }
    
    //7**
    if(board[2][0]==66)
    {
      board[2][0]=ascii;
      print_board(board);
      return;
    }
    
    //8**
    if(board[2][1]==66)
    {
      board[2][1]=ascii;
      print_board(board);
      return;
    }
    
    //9**
    if(board[2][2]==66)
    {
      board[2][2]=ascii;
      print_board(board);
      return;
    }
  }
  
  /*i=0;
  j=0;
  sum=0;
  if(board[1][1]==66)
  {
    board[1][1]=ascii;
    print_board(board);
    return;
  }
  else
  {
    
  }
  else
  {
    i=0;
    j=0;
    sum=0;    
    while(i<3)
    {
      sum=0;
      j=0;
      while(j<3)
      {
        element[j]=(int)board[i][j];
        sum=sum+(int)board[i][j];
        j++;  
      }
      if(sum==224 || sum==242)
      {
        if(element[0]==66)
        {
          board[i][0]=ascii;
          print_board(board);
          return;
        }
        else if(element[1]==66)
        {
          board[i][1]=ascii;
          print_board(board);
          return;
        }
        else
        {
          board[i][2]=ascii;
          print_board(board);
          return;
        }
      }
      else
      {
        i++;
      }
    }
    
    i=0;
    j=0;
    sum=0;    
    while(j<3)
    {
      sum=0;
      i=0;
      while(i<3)
      {
        element[i]=(int)board[i][j];
        sum=sum+(int)board[i][j];
        i++;  
      }
      if(sum==224 || sum==242)
      {
        if(element[0]==66)
        {
          board[0][j]=ascii;
          print_board(board);
          return;
        }
        else if(element[1]==66)
        {
          board[1][j]=ascii;
          print_board(board);
          return;
        }
        else
        {
          board[2][j]=ascii;
          print_board(board);
          return;
        }
      }
      else
      {
        j++;
      }
    }
    
    i=0;
    sum=0;
    while(i<3)
    {
      element[i]=(int)board[i][i];
      sum=sum+(int)board[i][i];
    }
    if(sum==224 || sum==242)
    {
      if(element[0]==66)
      {
        board[0][0]=ascii;
        print_board(board);
        return;
      }
      else if(element[1]==66)
      {
        board[1][1]=ascii;
        print_board(board);
        return;
      }
      else
      {
        board[2][2]=ascii;
        print_board(board);
        return;
      }
    }
    
    sum=0;  
    for(i=0,j=2;i<=2 && j>=0;i++,j--)
    {
      element[i]=(int)board[i][j];
      sum=sum+(int)board[i][j];
    }
    if(sum==224 || sum==242)
    {
      if(element[0]==66)
      {
        board[0][2]=ascii;
        print_board(board);
        return;
      }
      else if(element[1]==66)
      {
        board[1][1]=ascii;
          print_board(board);  
        return;
      }
      else
      {
        board[2][0]=ascii;
        print_board(board);
        return;
      }
    }
  }*/
}

void playervsplayer(int board[3][3])
{
  int chance,ascii,ascii1,ascii2,sum,win=0;
  char symbol,symbol1,symbol2;
  printf("Player 1 please Choose between O or X : \n");
  scanf("%s",&symbol);
  //converting symbol to its ascii value
  ascii=(int)symbol;
    
    
  chance=1;
  print_board(board);
  
  do
  {
    if(chance==1)
    {
      printf("Player 1 chance\n\n");
      symbol1=symbol;
      ascii1=ascii;
      player1(board,ascii1);
      win=winner(board,chance);
      chance=chance+1;
  
    }
    else
    {
      printf("Player 2 chance\n\n");
      if(symbol=='O')
      {
        symbol2='X';
      }
      else if(symbol=='X')
      {
        symbol2='O';
      }
      ascii2=(int)symbol2;
      player2(board,ascii2);
      win=winner(board,chance);
      chance=chance-1;
  
  
    }
    sum=(int)board[0][0]+(int)board[0][1]+(int)board[0][2]
    +(int)board[1][0]+(int)board[1][1]+(int)board[1][2]
    +(int)board[2][0]+(int)board[2][1]+(int)board[2][2];
    if(sum==747||sum==756)
    {
      printf("Match Draw !!");
      break;
    }
  }while(win!=1);
}

void playervscomputer(int board[3][3])
{
  int chance,ascii,ascii1,ascii2,sum,win=0;
  char symbol,symbol1,symbol2;
  printf("Player please choose between O or X : \n");
  scanf("%s",&symbol);
  //converting symbol to its ascii value
  ascii=(int)symbol;
    
    
  chance=1;
  print_board(board);
  
  do
  {
    if(chance==1)
    {
      printf("Player 1 chance\n\n");
      symbol1=symbol;
      ascii1=ascii;
      player1(board,ascii1);
      win=winner(board,chance);
      chance=chance+1;
  
    }
    else
    {
      printf("Computer chance\n\n");
      if(symbol=='O')
      {
        symbol2='X';
      }
      else if(symbol=='X')
      {
        symbol2='O';
      }
      ascii2=(int)symbol2;
      computer(board,ascii2,ascii1);
      win=winner(board,chance);
      chance=chance-1;
  
  
    }
    sum=(int)board[0][0]+(int)board[0][1]+(int)board[0][2]
    +(int)board[1][0]+(int)board[1][1]+(int)board[1][2]
    +(int)board[2][0]+(int)board[2][1]+(int)board[2][2];
    if(sum==747||sum==756)
    {
      printf("Match Draw !!");
      break;
    }
  }while(win!=1);
}

void main()
{
  int board[3][3]={'B','B','B','B','B','B','B','B','B'},i,j,choice;//B=blank
  
  printf("WELCOME TO THE GAME !!!\n\n\n");
  
  printf("Enter your choice\n1)2 Player\n2)Player vs Computer\n");
  scanf("%d",&choice);
  
  switch(choice)
  {
    case 1 : printf("2 Player mode !!!\n");
         playervsplayer(board);
         break;
    case 2 : printf("Player vs Computer\n");
         playervscomputer(board);
         break;  
  }
  
  getch();
}
