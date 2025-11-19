bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int cols = matrixColSize[0];
    for(int i=0 ; i<matrixSize; i++){
        for(int j=0 ; j<cols ; j++){
            if(matrix[i][j]== target){
                return true;
            }
        }
    }
    return false;
}