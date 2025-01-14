#ifndef DEFINES_H
#define DEFINES_H

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 360

//gamestates
#define GSQuit 0 
#define GSIntro 1 
#define GSGame 2 
#define GSTitleScreen 3 
#define GSTimeOver 4 
#define GSReadyGo 5 
#define GSCredits 6 
#define GSGameTypeMenu 7 
#define GSShowHighScores 8

//gametypes
#define Fixed 0
#define Relative 1

#define NrOfSounds 14
#define NrOfRows 10
#define NrOfCols 14
#define NrOfBlockColors 5
#define BlockBlue 0
#define BlockYellow 1
#define BlockOrange 2
#define BlockGreen 3
#define BlockRed 4
#define MaxMusicFiles 26
#define TileWidth 35
#define TileHeight 35
#define SND_READYGO 0
#define SND_5MINUTE 1
#define SND_1MINUTE 2
#define SND_3 3
#define SND_2 4
#define SND_1 5
#define SND_TIMEOVER 6
#define SND_MENU 7
#define SND_SELECT 8
#define SND_WELCOME 9
#define SND_GOODBYE 10
#define SND_DELETE 11
#define SND_BLOCKSELECT 12
#define SND_ERROR 13

#define SCALE 1.5


struct SHighScore
{
    int[21] PName;
    int PScore;
};

struct SPoint
{
    int X,Y;
};

#endif