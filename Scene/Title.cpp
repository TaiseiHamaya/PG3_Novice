#include "Title.h"

#include <Novice.h>

#include "SceneManager.h"

void Title::initialize() {
}

void Title::update() {
	inputCoolTime -= 1 / 60.0f;
	if (Novice::CheckHitKey(DIK_SPACE) && inputCoolTime <= 0.0f) {
		SceneManager::GetInstance().set_scene(SceneName::Game);
	}
}

void Title::draw() const {
	Novice::ScreenPrintf(0, 0, "Title");
}
