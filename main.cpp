  #include <iostream>
  #include <cstdlib>
  #include <ctime>
  using namespace std;
  void equal();
  void computer_turn();
  char matrix[3][3]={'1','2','3','4','5','6','7','8','9'},p1='X';
  char random_number;
  void draw() {
      for (auto &i : matrix) {
          for (char j : i)
              cout << j <<" ";
          cout << endl;
      }
      cout << endl;
  }
   void equal(){
      if(random_number==1) {
          if (matrix[0][0] == 'X')
              computer_turn();
      }
          if(random_number==2) {
              if (matrix[0][1] == 'X')
                  computer_turn();
          }
       if(random_number==3) {
           if (matrix[0][2] == 'X')
               computer_turn();
       }
       if(random_number==4) {
           if (matrix[1][0] == 'X')
               computer_turn();
       }
       if(random_number==5) {
           if (matrix[1][1] == 'X')
               computer_turn();
       }
       if(random_number==6) {
           if (matrix[1][2] == 'X')
               computer_turn();
       }
       if(random_number==7) {
           if (matrix[2][0] == 'X')
               computer_turn();
       }
       if(random_number==8) {
           if (matrix[2][1] == 'X')
               computer_turn();
       }
       if(random_number==9) {
           if (matrix[2][2] == 'X')
               computer_turn();
       }

  }
  void input() {
     int value;
    cout << "enter the value  ";
    cin >> value;
    if (value == 1)
        matrix[0][0] = p1;
    else if (value == 2)
           matrix[0][1] = p1;
    else if (value == 3)
          matrix[0][2] = p1;
    else if (value == 4)
        matrix[1][0] = p1;
    else if (value == 5)
        matrix[1][1] = p1;
    else if (value == 6)
        matrix[1][2] = p1;
    else if (value == 7)
        matrix[2][0] = p1;
    else if (value == 8)
        matrix[2][1] = p1;
    else if (value == 9)
        matrix[2][2] = p1;
}

    void computer_turn(){
    if(p1=='X') {
        cout << "this is computer turn  "<<endl;
        srand(time(nullptr));
        for (size_t i = 1; i <= 1; i++) {
            random_number = rand() % 9 + 1;
            if (random_number == 1 && matrix[0][0]!='X')
                matrix[0][0] = 'O';
            else if (random_number == 2 && matrix[0][1]!='X' )
                matrix[0][1] = 'O';
           else if (random_number == 3 && matrix[0][2]!='X' )
                matrix[0][2] = 'O';
           else if (random_number == 4 && matrix[1][0]!='X' )
                matrix[1][0] = 'O';
           else if (random_number == 5 && matrix[1][1]!='X' )
                matrix[1][1] = 'O';
           else if (random_number == 6 && matrix[1][2]!='X')
                matrix[1][2] = 'O';
          else if (random_number == 7 && matrix[2][1]!='X')
                matrix[2][0] = 'O';
           else if (random_number == 8 && matrix[2][1]!='X')
                matrix[2][1] = 'O';
            else if (random_number == 9 && matrix[2][2]!='X')
                matrix[2][2] = 'O';
             else
                p1 = 'X';
        }
    }

    }
  char win(){
      if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
          return 'X';
      if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
          return 'X';
      if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
          return 'X';
      if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
          return 'X';
      if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
          return 'X';
      if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
          return 'X';
      if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
          return 'X';
      if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
          return 'X';
      if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
          return 'X';

      //computer turn rules

      if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
          return 'O';
      if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
          return 'O';
      if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
          return 'O';
      if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
          return 'O';
      if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
          return 'O';
      if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
          return 'O';
      if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
          return 'O';
      if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
          return 'O';
      if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
          return 'O';

  }

  int main() {
    cout<<"WELCOME IN TIC-TAC-TOE"<<endl;
    while(true){
    draw();
        input();
        draw();
        computer_turn();
        equal();
        if(win()=='X'){
            cout<<"HUMAN IS WIN";
            break;
        }
        else if(win()=='O'){
            cout<<"COMPUTER IS WIN";
            break;
        }
    }
    return 0;
}
