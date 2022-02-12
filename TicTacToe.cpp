#include <string>
#include <iostream>
// #include <vector>

/*
CSCI 3010, PE 4 Spring 2022
Portia Bhattacharjee and Veda Jammula
Creating a tic-tac-toe program to simulate playing a tic-tac-toe game 
betwen two users. Main function allows to play a mock game and test program.

Use Makefile to compile. "make" will produce executable "main". Run (on unix systems) with "./main"
*/

void CreateBoard(std::string Board[3][3]){ //creates 3x3 board for game
  // int row[3];
  // int col[3];
  // string Board[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      Board[i][j] = " ";
    }
  }
}

void DisplayBoard(std::string Board[3][3]){ //displays board
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      std::cout << Board[i][j] << "|"; //creating board columnn boundaries
    }
    std::cout << std::endl;
    //std::cout << "__" << std::endl; //test and see display - creating board row boundaries
  }
}

void PlaceMarker(std::string Board[3][3], std::string marker, int choice) //place marker at user's chosen square
{
  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     if (Board[i][j]){
  //       Board[row][col] = marker;
  //     }
  //   }
  // }
  if(choice == 1){
    Board[0][0] = marker;
  }
  else if(choice == 2){
    Board[0][1] = marker;
  }
  else if(choice == 3){
    Board[0][2] = marker;
  }
  else if(choice == 4){
    Board[1][0] = marker;
  }
  else if(choice == 5){
    Board[1][1] = marker;
  }
  else if(choice == 6){
    Board[1][2] = marker;
  }
  else if(choice == 7){
    Board[2][0] = marker;
  }
  else if(choice == 8){
    Board[2][1] = marker;
  }
  else if(choice == 9){
    Board[2][2] = marker;
  }
}

int GetPlayerChoice(){ //get user's chosen square location
	int choice = 0; //
	std::cout << "What is your chosen square (1-9 going from left to right, top to bottom)?";
	std::cin >> choice;
	std::cout << std::endl;

	// std::cout << "What is the column of your chosen square?";
	// std::cin >> col_choice;
	// std::cout << std::endl;

	return choice;
}

int main(){ //testing program to create mock game
  std::string test[3][3];
  std::string test_marker = "";
  int test_choice = 0;
  int choice_num = 9; //allows for 9 user choices
  CreateBoard(test);
  while (choice_num > 0){
    DisplayBoard(test);
    test_choice = GetPlayerChoice();
    if (choice_num % 2 != 0){
      PlaceMarker(test, "X", test_choice);
    }
    else{
      PlaceMarker(test, "O", test_choice);
    }
    choice_num--;
  }
}
