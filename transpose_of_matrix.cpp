#include <iostream>
using namespace std;

int main(){
    int r,c,i,j;
    
    cout<<"Enter the rows of the matrix:- ";cin>>r;
    cout<<"Enter the column of the matrix:- ";cin>>c;

    int matrix[r][c];
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    cout<<"The original matrix is:- \n";
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<"\t1";
        }
        cout<<endl;
    }

    int transpose[c][r];                                 //transpose of matrix
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    cout<<"\nThe new matrix is \n";
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}