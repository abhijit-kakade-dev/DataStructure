=begin
You are working on a logic game made up of a series of puzzles. The first type of puzzle you settle on is "sub-Sudoku", a game where the player has to position the numbers 1..N on an NxN matrix.

Your job is to write a function that, given an NxN matrix, returns true if  every row and column contains the numbers 1..N

The UI for the game does not do any validation on the numbers the player enters, so the matrix can contain any signed integer.

grid1 = [[2, 3, 1],[1, 2, 3],[3, 1, 2]]            -> True

2,1,3 => g[0][0], g[1][0], g[2][0]
grid2 = [[1, 2, 3],
         [3, 2, 1],
         [3, 1, 2]]            -> False

grid3 = [[2, 2, 3],
         [3, 1, 2],
         [2, 3, 1]]            -> False

grid4 = [[1]]                  -> True

grid5 = [[-1, -2, -3],
         [-2, -3, -1],
         [-3, -1, -2]]         -> False

grid6 = [[1, 3, 3],
         [3, 1, 2],
         [2, 3, 1]]            -> False

grid7 = [[1, 2, 3, 4],
         [4, 3, 2, 1],
         [1, 3, 2, 4],
         [4, 2, 3, 1]]         -> False

grid8 = [[0, 3],
         [3, 0]]               -> False

grid9 = [[0, 1],
         [1, 0]]               -> False

grid10 = [[0, 2],
          [2, 0]]              -> False

grid11 = [[1, 2, 3, 4],
          [2, 3, 1, 4],
          [3, 1, 2, 4],
          [4, 2, 3, 1]]        -> False

grid12 = [[-1, -2, 12, 1],
          [12, -1, 1, -2],
          [-2, 1, -1, 12],
          [1, 12, -2, -1]]     -> False

grid13 = [[2, 3, 3],
          [1, 2, 1],
          [3, 1, 2]]           -> False

grid14 = [[1, 3],              -> False
          [3, 1]]

validateSudoku(grid1) => True
validateSudoku(grid2) => False
validateSudoku(grid3) => False
validateSudoku(grid4) => True
validateSudoku(grid5) => False
validateSudoku(grid6) => False
validateSudoku(grid7) => False
validateSudoku(grid8) => False
validateSudoku(grid9) => False
validateSudoku(grid10) => False
validateSudoku(grid11) => False
validateSudoku(grid12) => False
validateSudoku(grid13) => False
validateSudoku(grid14) => False
  
Complexity analysis variables:  
  
N = The number of rows/columns in the matrix  
=end

grid1 = [
  [2, 3, 1],
  [1, 2, 3],
  [3, 1, 2],
]
grid2 = [
  [1, 2, 3],
  [3, 2, 1],
  [3, 1, 2],
]
grid3 = [
  [2, 2, 3],
  [3, 1, 2],
  [2, 3, 1],
]
grid4 = [
  [1],
]
grid5 = [
  [-1, -2, -3],
  [-2, -3, -1],
  [-3, -1, -2],
]
grid6 = [
  [1, 3, 3],
  [3, 1, 2],
  [2, 3, 1],
]
grid7 = [
  [1, 2, 3, 4],
  [4, 3, 2, 1],
  [1, 3, 2, 4],
  [4, 2, 3, 1],
]
grid8 = [
  [0, 3],
  [3, 0],
]
grid9 = [
  [0, 1],
  [1, 0],
]
grid10 = [
  [0, 2],
  [2, 0],
]
grid11 = [
  [1, 2, 3, 4],
  [2, 3, 1, 4],
  [3, 1, 2, 4],
  [4, 2, 3, 1],
]
grid12 = [
  [-1, -2, 12, 1],
  [12, -1, 1, -2],
  [-2, 1, -1, 12],
  [1, 12, -2, -1],
]
grid13 = [
  [2, 3, 3],
  [1, 2, 1],
  [3, 1, 2],
]
grid14 = [
  [1, 3],
  [3, 1],
]

def validateSudoku(grid)
  valid_sudoku = true
  grid_size = grid.length
  ideal_row = (1..grid_size).collect { |n| n}
  
  grid.each do |row|
    if row.sort != ideal_row
      valid_sudoku = false
      break
    end
  end
  
  grid_size.times do |col_index|
    col_sub_sudoku = []
    
    grid_size.times do |row_index|
      col_sub_sudoku.push(grid[row_index][col_index])
    end
    # print col_sub_sudoku
    # puts "--------"
    # print ideal_row
    # puts "---------"
    # puts col_sub_sudoku.sort == ideal_row
    
    if col_sub_sudoku.sort != ideal_row
      valid_sudoku = false
      break
    end
  end
  valid_sudoku
end

puts validateSudoku(grid1) 
puts validateSudoku(grid2) 
puts validateSudoku(grid3) 
puts validateSudoku(grid4) 
puts validateSudoku(grid5) 
puts validateSudoku(grid6) 
puts validateSudoku(grid7) 
puts validateSudoku(grid8) 
puts validateSudoku(grid9) 
puts validateSudoku(grid10) 
puts validateSudoku(grid11) 
puts validateSudoku(grid12) 
puts validateSudoku(grid13) 
puts validateSudoku(grid14)
