#include "SceneManager.h"

#include "Scene/Title.h"
#include "Scene/Game.h"
#include "Scene/Result.h"

std::vector<std::function<std::unique_ptr<IScene>(void)>> SceneManager::SceneFactory = {
	std::make_unique<Title>,
	std::make_unique<Game>,
	std::make_unique<Result>,
};

void SceneManager::initialize() {
	if (scene) {
		scene->initialize();
	}
}

void SceneManager::update() {
	if (scene) {
		scene->update();
	}
}

void SceneManager::draw() const {
	if (scene) {
		scene->draw();
	}
}

void SceneManager::set_scene(SceneName nextScene) {
	scene = SceneFactory[static_cast<int>(nextScene)]();
	scene->initialize();
}
