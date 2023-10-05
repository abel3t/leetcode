#include <iostream>
#include <vector>

using namespace std;
/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */
// @lc code=start
class Solution
{
public:
        bool isValidSudoku(vector<vector<char>> &board)
        {
            int rows[9][9] = {0};
            int cols[9][9] = {0};
            int blocks[3][3][9] = {0};

            for (int r = 0; r < 9; r++)
            {
                for (int c = 0; c < 9; c++)
                {
                    if (board[r][c] == '.')
                    {
                        continue;
                    }

                    int number = board[r][c] - '1';

                    if (rows[r][number]++)
                    {
                        return false;
                    }

                    if (cols[c][number]++)
                    {
                        return false;
                    }

                    if (blocks[r / 3][c / 3][number]++)
                    {
                        return false;
                    }
                }
            }
            return true;
        }
};
// @lc code=end
