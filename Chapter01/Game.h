// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "SDL/SDL.h"

// Vector2 struct just stores x/y coordinates
// (for now)
struct Vector2
{
	float x;
	float y;
};

// Game class
class Game
{
public:
	Game();
	// Initialize the game
	bool Initialize();
	// Runs the game loop until the game is over
	void RunLoop();
	// Shutdown the game
	void Shutdown();
private:
	// Helper functions for the game loop
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// Window created by SDL
	SDL_Window* mWindow;
	// Renderer for 2D drawing
	SDL_Renderer* mRenderer;
	// Number of ticks since start of game
	Uint32 mTicksCount;
	// Game should continue to run
	bool mIsRunning;
	
	// Pong specific
	// Direction of paddle A
	int mPaddleDir;
	// Position of paddle A
	Vector2 mPaddlePos;
	// Position of ball A
	Vector2 mBallPos;
	// Velocity of ball A
	Vector2 mBallVel;
	// Direction of paddle A
	int mPaddleDir2;
	// Position of paddle A
	Vector2 mPaddlePos2;
	// Position of ball A
	Vector2 mBallPos2;
	// Velocity of ball A
	Vector2 mBallVel2;
};
