#include <iostream>
#include <vector>
#include "GameObject.h"

class Player : public GameObject {

public:

	void update(float deltaTime) {
		std::cout << "Player" << std::endl;
	}

private:
};

class Enemy : public GameObject {
public:
	void update(float deltaTime) {
		std::cout << "Enemy" << std::endl;
	}

private:
};

class Projectile : public GameObject {
	void update(float deltaTime) {
		std::cout << "Projectile" << std::endl;

	}
};

class pickableItem : public GameObject {
	void update(float deltaTime) {
		std::cout << "pickableItem" << std::endl;

	}
};

int main() {

	std::vector<GameObject*> gameObjects;
	
	Player* player1 = new Player;
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;
	Projectile* projectile1 = new Projectile;
	pickableItem* pickable1 = new pickableItem;
	
	gameObjects.push_back(player1);
	gameObjects.push_back(enemy1);
	gameObjects.push_back(enemy2);
	gameObjects.push_back(enemy3);
	gameObjects.push_back(projectile1);
	gameObjects.push_back(pickable1);

	//kutsutaan updatea kaikille peliolioille

	for (int i = 0; i < gameObjects.size(); i++) {
		gameObjects[i]->update(1);
	}

}