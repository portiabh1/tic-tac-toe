void CreateBoard(){
  int row[3];
  int col[3];
  string Board[][];
  for(int i = 0; i < sizeof(row); i++){
    for(int j = 0; j < sizeof(col); j++){
      Board[i][j] = "[]";
    }
  }
}

main(){
  CreateBoard();
}

void DisplayBoard(string Board[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout << Board[i][j] << "|" << endl;
    }
    cout << "__" << std::endl;
  }
}

string[][] GePlayerChoice(string Board[3][3]){
  string[][] choice = [""][""]
  std::cout << "Where fo you want to play? " << std::endl;
  std::cin >> choice >> std::endl;
  return choice;
}
