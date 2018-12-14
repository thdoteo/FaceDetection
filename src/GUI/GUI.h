#ifndef GUI_H
#define GUI_H

#include <SDL2/SDL.h>

#include "../Image/Image.h"

class GUI
{
	int width, height;
	SDL_Renderer* renderer;
	public:
		void Start(int width, int height);
		void Show(Image image);
		void Wait();
};

#endif