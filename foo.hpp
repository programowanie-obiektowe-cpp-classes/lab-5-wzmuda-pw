#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm> 


inline std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
   
    result.reserve(people.size());

    for (auto& human : people)
    {
        
        if (human.isMonster())
        {
            result.push_back('n');
        }
        else
        {
            result.push_back('y');
        }
    }

    std::reverse(result.begin(), result.end());

    return result;
}
