#pragma once

class Game
{
public:
	Game();
	~Game();

	void Init(HWND hWnd);
	void Update();
	void Render();

protected:

private:
	HWND _hWnd;
	uint32 _width = 0;
	uint32 _height = 0;
};

