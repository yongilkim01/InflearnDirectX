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
	void CreateDeviceAndSwapChain();
	void CreateRenderTargetView();

	void RenderBegin();
	void RenderEnd();

	HWND _hWnd;
	uint32 _width = 0;
	uint32 _height = 0;

	ComPtr<ID3D11Device> _device = nullptr;
	ComPtr<ID3D11DeviceContext> _deviceContext = nullptr;
	ComPtr<IDXGISwapChain> _swapChain = nullptr;
};

