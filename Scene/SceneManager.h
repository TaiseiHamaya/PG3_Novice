#pragma once

#include <memory>
#include <vector>
#include <functional>

#include "IScene.h"

#include "SingletonInterface.h"

enum class SceneName {
	Title,
	Game,
	Result,
};

class SceneManager : public SingletonInterface<SceneManager> {
	__SINGLETON_INTERFACE(SceneManager)

public:
	void initialize();
	void update();
	void draw() const;

public:
	void set_scene(SceneName nextScene);

private:
	std::unique_ptr<IScene> scene;

private:
	static std::vector<std::function<std::unique_ptr<IScene>(void)>> SceneFactory;
};
