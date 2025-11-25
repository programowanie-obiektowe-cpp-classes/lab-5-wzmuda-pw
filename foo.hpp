#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm> 


inline std::vector foo(std::list& people)
{
    std::vector result;
    
    result.reserve(people.size());

    for (auto& human : people)
    {
        human.birthday();

        
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
