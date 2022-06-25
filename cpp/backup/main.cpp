/* taverner
   
By theadventureofe(John Gormley)

main file

the_adventure_of_e λ */

#include <iostream>
#include <map>
#include <memory>
#include <SDL2/SDL.h>

#include "headers/species.hpp"
#include "headers/element.hpp"
#include "headers/creature.hpp"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const char* SCREEN_TITLE = "taverner";

void sdl_start(SDL_Window** window, SDL_Renderer** renderer)
{

    //start SDL
    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
    {
        std::cout << "SDL_Init error: " <<  SDL_GetError() << "\n";
    }
    else
    {
        *window = SDL_CreateWindow(
                                   SCREEN_TITLE,
                                   SDL_WINDOWPOS_UNDEFINED,
                                   SDL_WINDOWPOS_UNDEFINED,
                                   SCREEN_WIDTH,
                                   SCREEN_HEIGHT,
                                   SDL_WINDOW_SHOWN);
    }
    
    if( window == NULL )
    {
        std::cout << "SDL_CreateWindow error: " <<  SDL_GetError() << "\n";
    }
    else
    {
        *renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    }

    if(renderer == nullptr)
    {
        std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << "\n";
    } 
    else
    {

        SDL_SetRenderDrawColor(*renderer, 0, 0, 255, 255);
        SDL_RenderClear(*renderer);
        SDL_SetRenderDrawColor(*renderer, 255, 255, 255, 255);
        
        SDL_Rect rect = {20, 20, 20, 20};
        SDL_RenderFillRect(*renderer, &rect);
    }
}

void test_rect(SDL_Renderer* renderer, int mover)
{
  
    //refresh screen
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    SDL_RenderClear(renderer);

    //draw rect on screen
    SDL_SetRenderDrawColor(renderer, 155, mover, mover/2, 255);
    SDL_Rect rect = {mover, mover, mover, mover};
    SDL_RenderFillRect(renderer, &rect);

}

void sdl_stop(SDL_Window* window, SDL_Renderer* renderer)
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}

// print all included cmd args (removes compiler warning)
void arg_print(int argc, char** argv)
{
    for(int i = 1; i < argc; i++)
    {
        printf("arg[%d]: %s", i, argv[i]);
    }
  
    if(argc > 1)
    {
        printf("\n");
    } 
}

int main (int argc, char** argv)
{
    arg_print(argc, argv);

    // print all data of zebra species
    // species_map["zebra"]->print();

    // print all data of water element
    // element_map["water"]->print();

    // testing default constructor
    // Creature creature_test = Creature();
    // std::cout << creature_test.name << "\n\n";

    //using the print function of the internal species of creature
    // creature_test.species->print();

    //using the print function of the interal eleement of creature
    // creature_test.element_1->print();

    //testing created creature
    Creature test = Creature("Jacob", "gelatinous cube", "shadow", "earth");
    std::cout << test.name << "\n\n";

    //using the print function of the internal species of creature
    test.species->print();

    //using the print function of the interal eleement of creature
    test.element_1->print();

    //SDL section
    //the window we'll be rendering to
    SDL_Window* window = NULL;

    SDL_Renderer* renderer = NULL;

    sdl_start(&window, &renderer);
    SDL_RenderPresent(renderer);
    //SDL_Delay(5000);
    
    //game loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    int mover = 0;

    //game loop
    while(!quit)
    {          
        test_rect(renderer, mover);
        SDL_RenderPresent(renderer);

        if(mover < 200){
        mover++;
        }
        //Handle events on queue
        while( SDL_PollEvent( &e ) != 0 )
        {
            //User requests quit
            if( e.type == SDL_QUIT )
            {
                quit = true;
            }
        }
    }

    sdl_stop(window, renderer);
 
    return 0;
}
