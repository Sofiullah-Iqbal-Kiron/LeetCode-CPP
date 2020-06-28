///Accepted.

class Solution
{
public:
   int findJudge(int N, vector< vector<int> > &trust)
   {
      int i, j;
      bool in_position;
      vector<int> judge;
      list<int> supporter;
      for (i = 1; i <= N; i++)
      {
         in_position = true;
         for (j = 0; j < trust.size(); j++)
         {
            if (trust[j][0] == i)
            {
               in_position = false;
               break;
            }
         }
         if (in_position)
         {
            for (j = 0; j < trust.size(); j++)
            {
               if (trust[j][1] == i)
               {
                  supporter.push_back(trust[j][0]);
               }
            }
            supporter.unique();
            if (supporter.size() == N - 1)
            {
               judge.push_back(i);
            }
            if (judge.size() >= 2)
            {
               return -1;
            }
            supporter.clear();
         }
      }
      if (judge.size())
      {
         return judge[0];
      }

      return -1;
   }
};

