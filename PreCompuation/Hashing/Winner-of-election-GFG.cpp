
class Solution{
    public:
    
      //Function to return the name of candidate that received maximum votes.
      vector<string> winner(string arr[],int n)
      {
         unordered_map<string,int> candidate_Votes; // IT will store the candidate name alongwith there total votes
         
         for(int i = 0;i<n;++i)
         {
             candidate_Votes[arr[i]]++;
         }
         
         // Finding maximum candidate with maximum votes and if there is a draw then choosing the one which has the less lexicographicall order
         
          int maxVotes = -1;
          string maxVotedCandidate;  
          
          for(auto &elem : candidate_Votes )
          {
              string candidateName = elem.first;
              int candidateVotes = elem.second;
              
              if(candidateVotes > maxVotes)
              {
                  maxVotes = candidateVotes;
                  maxVotedCandidate = candidateName;
              }
              
              if(candidateVotes == maxVotes)
              {
                  if(maxVotedCandidate > candidateName)
                  {
                      maxVotedCandidate = candidateName;
                  }
              }
          }
          
         return {maxVotedCandidate,to_string(maxVotes)};
         
      }
  };