#include<bits/stdc++.h>

 // 0 for empty 
    //1 for pawn
    //2 for  horse
    //3 for bishop
    //4 for rook
    //5 for queen
    //6 for king
    //minus for black
int board[8][8]={
    {4,2,3,5,6,3,2,4},
    {1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {-1,-1,-1,-1,-1,-1,-1,-1},
    {-4,-2,-3,-5,-6,-3,-2,-4}

    };

int player=1;
using namespace std;
void printboard(){
    for (int i = 0; i < 8; i++)
    {
        cout<<endl;
        for (int j = 0; j <8; j++)
        {
            cout<<board[i][j]<<" ";

        }
        cout<<endl;
        
    }
    
} 

int send(int i){
    if(i<0){
        return i*-1;
    }
    return i;
}

bool king(int i,int j,int ii,int jj){
    if(abs(ii-i)==1 && abs(jj-j)==1){
        return true;
    }
    return false;
}
bool queen(int i,int j,int ii,int jj){
    if( i==ii|| jj==j){
        return true;
    }
     if(abs(ii-i)==abs(jj-j)){
        return true;
    }

    return false;
}
bool rook(int i,int j,int ii,int jj){
    if( i==ii|| jj==j){
        return true;
    }
    return false;
}
bool bishop(int i,int j,int ii,int jj){
     if(abs(ii-i)==abs(jj-j)){
        return true;
    }
    return false;
}
bool horse(int i,int j,int ii,int jj){
    if((abs(ii-i)==2 || abs(jj-j)==2) &&  (abs(ii-i)==1 || abs(jj-j)==1)){
        return true;
    }
    return false;
}
bool pawn(int i,int j,int ii,int jj){
    if(ii-i==1 && j==jj){
        return true;
    }
    return false;
}

bool verifymove(int ii,int jj,int i,int j){
    if(board[i][j]>0 && board[ii][jj]>0){
         //checking if pic is same white
    return false;
    }else if(board[i][j]<0 && board[ii][jj]<0){
        //checking if pic is same black
        return false;
    }else if(board[i][j]==0){
        //for checking if pic is empty
        return false;
    }

    int pic=board[i][j];
    bool ret=true;
    switch (pic)
    {
    case 1:
        ret=pawn(i,j,ii,jj);
        return ret;
        break;
    case 2:
        ret= horse(i,j,ii,jj);
         return ret;
        break;
    case 3:
         ret=bishop(i,j,ii,jj);
         return ret;
        break;
    case 4:
         ret=rook(i,j,ii,jj);
         return ret;
    
        break;
    case 5:
         ret=queen(i,j,ii,jj);
     return ret;
        break;
    case 6:
         ret=king(i,j,ii,jj);
     return ret;
        break;
   
    }

    return true;
}

bool gameover(){
    return true;
}
int main(){
   
   

    printboard();
    while (gameover())
    {
        int i,j,ii,jj;
    cin>>i>>j>>ii>>jj;

    bool v=verifymove(ii,jj,i,j);
    
    }
    
    
    

    




}