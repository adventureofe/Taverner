#include <stdio.h>
#include <SDL2/SDL.h>

//starter working SDL file for the time being

void start(SDL_Window** window, SDL_Renderer** renderer)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    *window = SDL_CreateWindow("Hello", 200, 200, 200, 200, 0);
    *renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(*renderer, 0, 0, 255, 255);
    SDL_RenderClear(*renderer);
    SDL_SetRenderDrawColor(*renderer, 255, 255, 255, 255);

    SDL_Rect rect = {20, 20, 20, 20};
    SDL_RenderFillRect(*renderer, &rect);
}


void stop(SDL_Window* window, SDL_Renderer* renderer)
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}

int main(int argc, char **argv)
{
    SDL_Window* window;
    SDL_Renderer* renderer;

    start(&window, &renderer);
    SDL_RenderPresent(renderer); /* add this */
    SDL_Delay(5000);
    stop(window, renderer);

    return 0;
}
