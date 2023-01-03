#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include<algorithm>

using namespace std;

string tournamentWinner(vector<vector<string>> competitions, vector<int> results)
{
    std::unordered_map<std::string, int> teams;
    std::string firstTeam;
    std::string secondTeam;
    int currentResult;

    std::string winningTeam = "";

    for (size_t i = 0; i < results.size(); i++)
    {
        firstTeam = competitions[i].front();
        secondTeam = competitions[i].back();
        currentResult = results[i];

        if (currentResult) //Home Team won
        {
            if (teams.find(firstTeam) != teams.end())
                teams[firstTeam] += 3;

            else
                teams.insert({ firstTeam,3 });

            if (teams[firstTeam]>teams[winningTeam])
                winningTeam = firstTeam;
        }
        else
        {
            if (teams.find(secondTeam) != teams.end())
                teams[secondTeam] += 3;

            else
                teams.insert({ secondTeam,3 });

            if (teams[secondTeam] > teams[winningTeam])
                winningTeam = secondTeam;
        }
    }
    return winningTeam;
}

int main()
{
    vector<vector<string>> competitions = {
    {"HTML", "C#"}, {"C#", "Python"}, {"Python", "HTML"} };
    vector<int> results = { 0, 0, 1 };

    std::cout<<tournamentWinner(competitions, results);
}


