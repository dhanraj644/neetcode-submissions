class Solution {
private :
 bool checkRow(vector<char>& row)
 {
    unordered_set<char> rowCheck;

    for(char c : row)
    {
        if(c == '.')
        {
            continue;
        }

        if(rowCheck.count(c))
        {
            return false;
        }

        rowCheck.insert(c);
    }

    return true;
 }
 bool checkCol(vector<vector<char>>& board,int j)
 {
    unordered_set<char> colCheck;

    for(int i=0; i<9; i++)
    {
        char c = board[i][j];
        if(c == '.')
        {
            continue;
        }

        if(colCheck.count(c))
        {
            return false;
        }

        colCheck.insert(c);
    }

    return true;
 }

bool checkbox(vector<vector<char>>& board,int boxnum)
 {
    unordered_set<char> boxCheck;

    int i= 3*(boxnum/3);
    int j= 3*(boxnum%3);

    for(int a=i; a<i+3; a++)
    {
       for(int b=j; b<j+3; b++)
       {
        char c=board[a][b];
         if(c == '.')
        {
            continue;
        }

         if(boxCheck.count(c))
        {
            return false;
        }

        boxCheck.insert(c);

       }
    }

    return true;
 }


public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0; i<9; i++)
        {
       
            if(!checkRow(board[i]))
            {
                return false;
            }
        }

        for(int j=0; j<9; j++)
        {
            if(!checkCol(board,j))
            {
                return false;
            }
        }


        for(int boxnum=0; boxnum<9; boxnum++)
        {
            if(!checkbox(board,boxnum))
            {
                return false;
            }
        }

    return true;
    }
};
