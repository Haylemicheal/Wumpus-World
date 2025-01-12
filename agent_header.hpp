#include "environment.hpp"

class Agent : public Environment
{
public:
    int current_position = 0;
    int prev_position = 0;
    int arrow;
    bool go = true;
    void move(int &current_position,int &prev_position,std::vector<std::vector<bool>> &percept_history,int gold_cont,bool &go);
    auto sense(int current_pos, std::vector<int> stinch, std::vector<std::vector<int>> breeze);
    void shoot();
    void grab();
    void fill_percept_history(std::vector<std::vector<bool>> &percept_history, std::vector<bool> sense, int current_pos);
    void set_agent_position(std::vector<std::vector<char>> &world,int current_position,int prev_position);
    std::vector<std::vector<bool>> make_percept_history();
    std::vector<std::vector<bool>> percept_history;
    
};
