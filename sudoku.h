/*
 *Harshan Mohanaraj, Rohil Arya 
 */
extern void printSudoku ();
extern void writeToFile (char fileName[]);
extern void readInSudoku (char fileName[]);
extern int check_row(int row, int num);
extern int check_col(int col, int num);
extern int check_grid(int row, int col, int num);
extern void navigate(int row, int col);
extern void solve_square(int row, int col);
extern void* validateColumns();
extern void* validateRows();
extern int validateGrid(int rowNum, int column);
extern void* validateGrids();
extern int validateSudoku();
