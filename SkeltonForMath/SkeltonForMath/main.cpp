#include<DxLib.h>
#include"Geometry.h"

bool IsHitRect(Rect)
{
	return true;
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR,int) {
	DxLib::SetMainWindowText(_T("2016195 Ä“c‘å‹P"));
	ChangeWindowMode(true);
	SetGraphMode(960, 540, 32);
	//Init‚Ì‘O‚É‚Á‚Ä‚­‚é

	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0)
	{
		ClearDrawScreen();

		//DrawCircle(480, 270, 200, 0xFFFFFF);

		ScreenFlip();
	}
	DxLib_End();
}