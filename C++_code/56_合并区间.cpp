/*
56. 合并区间
给出一个区间的集合，请合并所有重叠的区间。

示例 1:

输入: [[1,3],[2,6],[8,10],[15,18]]
输出: [[1,6],[8,10],[15,18]]
解释: 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
示例 2:

输入: [[1,4],[4,5]]
输出: [[1,5]]
解释: 区间 [1,4] 和 [4,5] 可被视为重叠区间。
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return {};

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merge;
        for(int i=0;i<intervals.size();i++)
        {
            if(!merge.size()||merge.back()[1]<intervals[i][0])
                merge.push_back({intervals[i][0],intervals[i][1]});
            else
                merge.back()[1] = max(merge.back()[1],intervals[i][1]);
        }
        return merge;
    }
};