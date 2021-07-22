#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Abilities.h"
#include "Alignment.h"
#include "Class.h"
#include "Feats.h"
#include "Inventory.h"
#include "Language.h"
#include "Money.h"
#include "Name.h"
#include "PC.h"
#include "Race.h"
#include "Skills.h"
#include "State.h"
#include "Weapon.h"





int main()
{

    sf::RenderWindow window(sf::VideoMode(1366  , 768), "GridOfTheBarbalock-CL5");
    sf::Window().setFramerateLimit(70);
    sf::Event event;

    while (window.isOpen()) {

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                window.close();
            }
        }
    }

    return 0;
}                    