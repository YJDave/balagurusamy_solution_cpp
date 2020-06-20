/*

    ....

*/

#ifdef _WIN32
#include<iostream.h>
#endif

#ifdef linux
#include<iostream>
#endif

//set maximum value for total votes
//(total no of candidate, each candidate can give only vote)
#define maxVote 10
using namespace std;

int main()
{
    int vote,
        Aparty = 0,
        Bparty = 0,
        Cparty = 0,
        Dparty = 0,
        Eparty = 0,
        spoiltBallots = 0;
    //spoiltBallots are vote which do not match to any party's vote

    //information to show user
    cout<<"\nPress 1 to vote 'A' party\nPress 2 to vote 'B' party"
        <<"\nPress 3 to vote 'C' party\nPress 4 to vote 'D' party"
        <<"\nPress 5 to vote 'E' party"<<endl;
    cout<<"\nEnter all(total : 10) one by one votes \n";

    for(int i=0;i<maxVote;i++)
    {
        cout<<"Enter vote : ";
        cin>>vote;
        switch(vote)
        {
        case 1:
            Aparty++;
            break;
        case 2:
            Bparty++;
            break;
        case 3:
            Cparty++;
            break;
        case 4:
            Dparty++;
            break;
        case 5:
            Eparty++;
            break;
        default:
            spoiltBallots++;
            break;
        }
    }
    //changed
    
    //print result
    cout<<"\nParty 'A' gets "<<Aparty<<" votes out of "<<maxVote<<" votes "
        <<"\nParty 'A' gets "<<(float)Aparty/maxVote*100<<"% votes of total votes"<<endl;
    
    cout<<"\nParty 'B' gets "<<Bparty<<" votes out of "<<maxVote<<" votes "
        <<"\nParty 'B' gets "<<(float)Bparty/maxVote*100<<"% votes of total votes"<<endl;
    
    cout<<"\nParty 'C' gets "<<Cparty<<" votes out of "<<maxVote<<" votes "
        <<"\nParty 'C' gets "<<(float)Cparty/maxVote*100<<"% votes of total votes"<<endl;
    
    cout<<"\nParty 'D' gets "<<Dparty<<" votes out of "<<maxVote<<" votes "
        <<"\nParty 'D' gets "<<(float)Dparty/maxVote*100<<"% votes of total votes"<<endl;
    
    cout<<"\nParty 'E' gets "<<Eparty<<" votes out of "<<maxVote<<" votes "
        <<"\nParty 'E' gets "<<(float)Eparty/maxVote*100<<"% votes of total votes"<<endl;
    
    cout<<"\n"<<spoiltBallots<<" votes are spoilt ballots "<<endl;
    return 0;
}