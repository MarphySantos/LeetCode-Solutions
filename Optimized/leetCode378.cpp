class Solution {
public:
    
    class mycomparison
    {
      public:
      bool operator() (const pair<int, pair<int, int>> &lhs, const pair<int, pair<int, int>> &rhs)
      {
        return lhs.first > rhs.first;
      }
    };
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int len = matrix.size();
        // priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, mycomparison> pq;
        // for(int i = 0; i < len && i < k; i++)
        //     pq.push(make_pair(matrix[i][0], make_pair(i, 0)));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, mycomparison> pq;

    // put the 1st element of each row in the min heap
    // we don't need to push more than 'k' elements in the heap
    for (int i = 0; i < len && i < k; i++) {
      pq.push(make_pair(matrix[i][0], make_pair(i, 0)));
    }
        
        
        int counter = 0;
        while(!pq.empty()){
            pair<int, pair<int, int>> curr = pq.top();
            counter++;
            if(counter == k){
                return curr.first;
            }
            pq.pop();
            curr.second.second++;
            if(curr.second.second < len){
                pq.push(make_pair(matrix[curr.second.first][curr.second.second], make_pair(curr.second.first, curr.second.second)));
            }
        }
        return 0;
    }
};
