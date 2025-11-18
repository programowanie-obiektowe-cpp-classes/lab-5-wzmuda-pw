#pragma once
#include "Human.hpp"
#include <list>
#include <vector>
#include <algorithm> 
#include <print>     

inline std::vector<char> foo(std::list<Human>& people)
{
    std::vector<char> result;
    
    result.reserve(people.size());

    for (auto& human : people) {
        
        human.birthday();

        if (human.isMonster()) {
            result.push_back('n');
        } else {
            result.push_back('y');
        }

        std::print("Zaktualizowano Human. isMonster: {}\n", human.isMonster());
    }
    std::reverse(result.begin(), result.end());

    return result;
}
