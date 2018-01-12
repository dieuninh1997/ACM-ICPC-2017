#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

void checkHV(int arr[][MAX], int N, int M)
{
    // Initializing as both horizontal and vertical
    // symmetric.
    int horizontal = 0, vertical = 0;

    // Checking for Horizontal Symmetry.  We compare
    // first row with last row, second row with second
    // last row and so on.
    for (int i=0, k=N-1; i<N/2; i++, k--)
    {
        // Checking each cell of a column.
        for (int j=0; j<M; j++)
        {
            // check if every cell is identical
            if (arr[i][j] != arr[k][j])
            {
                horizontal ++;
               // break;
            }
        }
    }

    // Checking for Vertical Symmetry.  We compare
    // first column with last column, second xolumn
    // with second last column and so on.
    for (int i=0, k=M-1; i<M/2; i++, k--)
    {
        // Checking each cell of a row.
        for (int j = 0; j < N; j++)
        {
            // check if every cell is identical
            if (arr[i][j] != arr[k][j])
            {
                vertical ++;
                //break;
            }
        }
    }

   	cout<<vertical+horizontal;
   
}

// Driven Program
int main()
{
  	 int n,m;
	cin>>n>>m;
		int mat[MAX][MAX];
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<m;j++)
		{
			cin>>mat[i][j];
		}
	}

    checkHV(mat, n, m);

    return 0;
}
