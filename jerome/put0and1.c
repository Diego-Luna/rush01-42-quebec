#include <stdio.h>
#include <unistd.h>

int clue_is_not_one_impossibles(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in table 4 (rules c) */
{
	if	(tab_reference[5][y] != 1)
		table[4][3][y] = 1;
	if	(tab_reference[0][y] != 1)
		table[4][0][y] = 1;
	if	(tab_reference[x][5] != 1)
		table[4][x][3] = 1;
	if	(tab_reference[x][0] != 1)
		table[4][x][0] = 1;
}

int clue_is_one_impossibles(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables (see whiteboard for clue one)  */
{
	if	(tab_reference[5][y] == 1)
	{
		table[3][3][y] = 1;
		table[2][3][y] = 1;
		table[1][3][y] = 1;
	}
	if	(tab_reference[0][y] == 1)
	{
		table[3][0][y] = 1;
		table[2][0][y] = 1;
		table[1][0][y] = 1;
	}
	if	(tab_reference[x][5] == 1)
	{
		table[3][x][3] = 1;
		table[2][x][3] = 1;
		table[1][x][3] = 1;
	}
	if	(tab_reference[x][0] == 1)
	{
		table[3][x][0] = 1;
		table[2][x][0] = 1;
		table[1][x][0] = 1;
	}
}

int clue_is_2_impossibles(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables 3 and 4 (see whiteboard for clue 2)  */
{
	if	(tab_reference[5][y] == 23)
	{
		table[4][3][y] = 1;
		table[3][2][y] = 1;
	}
	if	(tab_reference[0][y] == 2)
	{
		table[4][0][y] = 1;
		table[3][1][y] = 1;
	}
	if	(tab_reference[x][5] == 2)
	{
		table[4][x][3] = 1;
		table[3][x][2] = 1;
	}
	if	(tab_reference[x][0] == 2)
	{
		table[4][x][0] = 1;
		table[3][x][1] = 1;
	}
}

int clue_is_3_impossibles(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables 3 and 4 (rule f and whiteboard clue 3)  */
{
	if	(tab_reference[5][y] == 3)
	{
		table[4][3][y] = 1;
		table[4][2][y] = 1;
		table[3][3][y] = 1;
	}
	if	(tab_reference[0][y] == 3)
	{
		table[4][0][y] = 1;
		table[4][1][y] = 1;
		table[3][0][y] = 1;
	}
	if	(tab_reference[x][5] == 3)
	{
		table[4][x][3] = 1;
		table[4][x][2] = 1;
		table[3][x][3] = 1;
	}
	if	(tab_reference[x][0] == 3)
	{
		table[4][x][0] = 1;
		table[4][x][1] = 1;
		table[3][x][0] = 1;
	}
}

int clue_is_four_impossibles_RR(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables (see whiteboard for clue four)  FOR RIGHT ROWS*/
{
	if	(tab_reference[5][y] == 4)
	{
		table[4][3][y] = 1;
		table[4][2][y] = 1;
		table[4][1][y] = 1;
		table[3][3][y] = 1;
		table[3][2][y] = 1;
		table[3][0][y] = 1;
		table[2][3][y] = 1;
		table[2][1][y] = 1;
		table[2][0][y] = 1;
		table[1][2][y] = 1;
		table[1][1][y] = 1;
		table[1][0][y] = 1;
	}

int clue_is_four_impossibles_LR(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables (see whiteboard for clue four)  FOR LEFT ROWS */
{
	if	(tab_reference[0][y] == 4)
	{
		table[4][0][y] = 1;
		table[4][1][y] = 1;
		table[4][2][y] = 1;
		table[3][0][y] = 1;
		table[3][1][y] = 1;
		table[3][3][y] = 1;
		table[2][0][y] = 1;
		table[2][2][y] = 1;
		table[2][3][y] = 1;
		table[1][1][y] = 1;
		table[1][2][y] = 1;
		table[1][3][y] = 1;
	}
}

int clue_is_four_impossibles_BC(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables (see whiteboard for clue four)  FOR BOTTOM COLUMNS*/
{
	if	(tab_reference[x][5] == 4)
	{
		table[4][x][3] = 1;
		table[4][x][2] = 1;
		table[4][x][1] = 1;
		table[3][x][3] = 1;
		table[3][x][2] = 1;
		table[3][x][0] = 1;
		table[2][x][3] = 1;
		table[2][x][1] = 1;
		table[2][x][0] = 1;
		table[1][x][2] = 1;
		table[1][x][1] = 1;
		table[1][x][0] = 1;
	}
}

int clue_is_four_impossibles_TC(int x, int y, int table[5][4][4]) /* this function puts 1 (impossible) in tables (see whiteboard for clue four) . FOR TOP COLUMNS */
{
	if	(tab_reference[x][0] == 4)
	{
		table[4][x][0] = 1;
		table[4][x][1] = 1;
		table[4][x][2] = 1;
		table[3][x][0] = 1;
		table[3][x][1] = 1;
		table[3][x][3] = 1;
		table[2][x][0] = 1;
		table[2][x][2] = 1;
		table[2][x][3] = 1;
		table[1][x][1] = 1;
		table[1][x][2] = 1;
		table[1][x][3] = 1;
	}
}

int clue_is__one_results(int x, int y, int table[5][4][4]) /* this function puts 4 in results (rule a) */
{
	if	(tab_reference[5][y] == 1)	/* if my clues on RIGHT ROWS == 1 */
		tab_results[3][y] = 4;		/* put a 4 next to the clue in the  result tables */

	if	(tab_reference[0][y] == 1)	/* clues on LEFT ROWS == 1 */
		tab_results[0][y] = 4;	

	if	(tab_reference[x][5] == 1)	/* clue on BOTTOM COLS == 1 */
		tab_results[x][3] = 4;

	if	(tab_reference[x][0] == 1)	/* clue on TOP COLS == 1 */
		tab_results[x][0] = 4;
}

int clue_is_four__results_RR(int x, int y, int table[5][4][4]) /* this function puts 1,2,3,4 in result table if clue == 4 (rule b) */
{
	if	(tab_reference[5][y] == 4)	/* if my clues on RIGHT ROW == 4 */
	{
		table_results[3][y] = 1;
		table_results[2][y] = 2;
		table_results[1][y] = 3;
		table_results[0][y] = 4;
	}
}

int clue_is_four_results_LR(int x, int y, int table[5][4][4]) /* this function puts 1,2,3,4 in result table if clue == 4 */
{	
	if	(tab_reference[0][y] == 4)	/* clues on LEFT ROW == 4 */
	{
		table_results[0][y] = 1;
		table_results[1][y] = 2;
		table_results[2][y] = 3;
		table_results[3][y] = 4;
	}
}

int clue_is_four_results_BC(int x, int y, int table[5][4][4]) /* this function puts 1,2,3,4 in result table if clue == 4 */
{	
	if	(tab_reference[x][5] == 4)	/* clue on BOTTOM COL == 4 */
	{
		table_results[x][3] = 1;
		table_results[x][2] = 2;	
		table_results[x][1] = 3;		
		table_results[x][0] = 4;			
	}
}

int clue_is_four_results_TC(int x, int y, int table[5][4][4]) /* this function puts 1,2,3,4 in result table if clue == 4 */
{
	if	(tab_reference[x][0] == 4)	/* clue on TOP COL == 4 */
	{
		table_results[x][0] = 1;
		table_results[x][1] = 2;
		table_results[x][2] = 3;
		table_results[x][3] = 4;
	}
}


