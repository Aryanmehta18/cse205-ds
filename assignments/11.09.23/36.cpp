
public bool IsValidSudoku(char[][] board) {
        HashSet<string> exist = new();
        for(int i=0; i<board.Length; i++)
        {
            for(int j=0; j<board[i].Length; j++)
            {
                char currentNum = board[i][j];
                if( currentNum != '.' &&
                  ( !exist.Add(currentNum + "row" + i) ||
                    !exist.Add(currentNum + "col" + j) || 
                    !exist.Add(currentNum + "cube" + i/3 + "," + j/3))) return false;
            }
        }
        return true;
    }