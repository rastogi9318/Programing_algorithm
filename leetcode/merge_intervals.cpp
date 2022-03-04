vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end()); // sort the given intervals
    vector<vector<int>> res;
    int i=0;
    int start=-1,end=-1;
    while(i<n){
        if(start==-1){
            /* aranging the column 0 and column 1*/
            start=intervals[i][0];
            end=intervals[i][1];
            i++;
        }
        else{
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
                i++;
            }
            else{
                res.push_back(vector<int>{start, end});
                start=intervals[i][0];
                end=intervals[i][1];
                i++;
            }
        }
    }
    if(start!=-1){
        res.push_back(vector<int>{start, end});
    }
    return res;
    }
