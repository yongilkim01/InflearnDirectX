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
	void SetViewport();

	void RenderBegin();
	void RenderEnd();

	HWND _hWnd;
	uint32 _width = 0;
	uint32 _height = 0;

	ComPtr<ID3D11Device> _device = nullptr;
	ComPtr<ID3D11DeviceContext> _deviceContext = nullptr;
	ComPtr<IDXGISwapChain> _swapChain = nullptr;

	ComPtr<ID3D11RenderTargetView> _renderTargetView;

	D3D11_VIEWPORT _viewport = { 0 };
	float _clearColor[4] = { 0.5f, 0.5f, 0.5f, 0.5f };
};

