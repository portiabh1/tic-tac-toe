void CreateBoard(){
  int row[3];
  int col[3];
  int Board[][];
  for(int i = 0; i < sizeof(row); i++){
    for(int j = 0; j < sizeof(col); j++){
      Board[i][j] = "[]";
    }
  }
}

main(){
  CreateBoard();
}
