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
    cout << "__" << endl;
  }
}

string PlaceMarker(String[][] location, bool marker)
{
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if (location == Board[i][j]){
        marker == true;
      }
      else{
        marker == false;
      }
    }
  }
}
}
