
// Approach to this solve 
// We have to think basic 
// What is rectangle [ 1 1 1 ] = output will be 3
// if we are able to find minTopOneValue,maxTopOneValue(row-wise)
// if we are able to find minLeftOnevalue, minRIghtonevale(column-wise)
// then we will try to think to solve this problem
// 'RANGE' kaha se kaha tak aa rahi hai
// = width
// = length
// = multiply both of the them,to get the area 

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int rowSize = grid.size(); // rows
        int colSize = grid[0].size(); // colums 

        int minRow = rowSize;
        int maxRow = -1;
        int minCol = colSize;
        int maxCol = -1;

        for(int row = 0; row < rowSize; row++){
            for(int col = 0; col < colSize; col++){

                if(grid[row][col] == 1){
                    minRow = min(minRow,row);
                    maxRow = max(maxRow,row);

                    // finding out the top upper level of 1
                    // findout out the bottom level of 1
                    minCol = min(minCol,col);
                    maxCol = max(maxCol,col);
                }
            }
        }
        int width = maxRow - minRow + 1;
        int length = maxCol - minCol + 1;
        int area = width * length;
        // The formula area = width × length 
        // translates to Hindi as क्षेत्रफल = चौड़ाई × लंबाई.
        return area;
    }
};