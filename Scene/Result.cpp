#include "Result.h"

#include <Novice.h>

#include "SceneManager.h"

void Result::initialize() {
}

void Result::update() {
	inputCoolTime -= 1 / 60.0f;
	if (Novice::CheckHitKey(DIK_SPACE) && inputCoolTime <= 0.0f) {
		SceneManager::GetInstance().set_scene(SceneName::Title);
	}
}

void Result::draw() const {
	Novice::ScreenPrintf(0, 0, "Result");
}
