#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm> // Niezbędne dla std::reverse

// Dodano 'inline', aby zapobiec błędom linkera przy dołączaniu pliku w wielu miejscach
inline std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
    // Rezerwacja pamięci dla optymalizacji (znamy liczbę elementów)
    result.reserve(people.size());

    for (auto& human : people)
    {
        // 1. Inkrementujemy wiek (modyfikacja obiektu na liście)
        human.birthday();

        // 2. Sprawdzamy warunek
        // Zadanie: wpisz 'y' jeśli lubi zwierzęta, 'n' jeśli nie.
        // Metoda isMonster(): zwraca true, jeśli NIE lubi zwierząt.
        // Zatem: isMonster() == true  -> 'n'
        //        isMonster() == false -> 'y'
        if (human.isMonster())
        {
            result.push_back('n');
        }
        else
        {
            result.push_back('y');
        }
    }

    // 3. Odwracamy kolejność znaków
    // (Wymóg: kolejność odwrotna od kolejności osób)
    std::reverse(result.begin(), result.end());

    return result;
}
