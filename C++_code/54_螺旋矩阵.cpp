/*
54. 螺旋矩阵
给定一个包含 m x n 个元素的矩阵（m 行, n 列），请按照顺时针螺旋顺序，返回矩阵中的所有元素。

示例 1:

输入:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
输出: [1,2,3,6,9,8,7,4,5]
示例 2:

输入:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
输出: [1,2,3,4,8,12,11,10,9,5,6,7]
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size()==0||matrix[0].size()==0)
        {
            return {};
        }
        int row= matrix.size(),col = matrix[0].size();
        vector<int> order;
        int left = 0,right=col-1,top=0,bottom=row-1;
        while(left<=right&&top<=bottom)
        {
            int i = left,j=top+1,k = right-1,l =bottom-1;
            while(i<=right)
            {               
                order.push_back(matrix[top][i]);
                
                i++;
            }
            while(j<=bottom)
            {
                order.push_back(matrix[j][right]);
                
                j++;
            }
                
            if(left<right&&top<bottom)
            {
                 while(k>=left)
                {
                    
                    order.push_back(matrix[bottom][k]);
                    k--;
                }
                   
                while(l>=top+1)
                {
                    order.push_back(matrix[l][left]);
                    
                    l--;
                }
            }
               
                    
            left++,right--,top++,bottom--;
        }
        return order;

        
    }
};