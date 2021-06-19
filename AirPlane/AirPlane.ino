#include <Gamebuino-Meta.h>
#define GAMEMAKERS 0
#define TITLESCREEN 1
#define MENU 2
#define GAME 3


#define CONTROLS 97
#define CREDITS 98
#define MENUPAUSE 99

#define SCREENHEIGHT 64
#define SCREENWIDTH 80

#define WORLDHEIGHT 120
#define WORLDWIDTH 900

#define NBENNEMIES 45

#define ENNEMY_ALIVE 8
#define ENNEMY_DAMAGED 7
#define ENNEMY_EXPLOZ1 6
#define ENNEMY_EXPLOZ2 5
#define ENNEMY_EXPLOZ3 4
#define ENNEMY_EXPLOZ4 3
#define ENNEMY_PARACHUTE 2
#define ENNEMY_PARADEAD 1
#define ENNEMY_DEAD 0

#define ENNEMY_DISTANCE1 20
#define ENNEMY_DISTANCE2 25
#define ENNEMY_DISTANCE3 30
#define ENNEMY_DISTANCE4 35
#define ENNEMY_DISTANCE5 50

//###########################
//######## TO DO ############
//###########################
//- bug player position 900 -> 0
//- bug affichage fire
//- mouvements ennemis
//- bullet ennemis
//- boss
//- points


//###########################
//##### INFO Global #########
//###########################
typedef struct{
  int gameStatus; 
  int globalTimer;
  int pause;
  int menuOption;
  int menuPauseOption;
}GameInfo;
GameInfo game;

typedef struct{
  int xPosition;
  int yPosition;
  bool goingUP;
  bool goingRIGHT;
  bool goingDOWN;
  bool goingLEFT;
  int score;
  int life;
  int timer;
}PlayerInfo;
PlayerInfo player;
/*
typedef struct{
  int xPosition;
  int yPosition;
}BulletInfo;
BulletInfo playerBullet[5];
*/
bool playerBullet[5];

typedef struct{
  int xPosition;
  int yPosition;
  int zPosition;
  bool globalDirection; //0:LEFT  1:RIGHT
  bool isActive;        //default is false. When true, zPosition start to decrease.
  int life;             //7 parachute 6alive  5damaged  4explosion1 3explosion1 2explosion2 1explosion2 0dead (when dead, random 7parachute)
  int type;
  int score;
}EnnemyInfo;
EnnemyInfo ennemy[NBENNEMIES];


typedef struct{
  int xPosition;
  int yPosition;
  int globalDirection;
  int globalXDirection;
  int globalYDirection;
  int life;
  int anim;
}EnnemyBullet;
EnnemyBullet bullets[NBENNEMIES];

typedef struct{
  int xPosition;
  int yPosition;
  int type;
}BackgroundItemInfo;
BackgroundItemInfo cloudInfo[3];


typedef struct {
  int8_t weapon;
  int8_t bonus;
  int8_t playerDamage;
  int8_t music;
}SoundInfo;
SoundInfo sounds;



//###########################
//##### Game Setup ##########
//###########################
void setup(){
  gb.begin();
  game_init();
  game_initPlayer();
  game_initBullets();
  game_initEnnemies();
  game_initEnnemiesBullets();  
  game_initBackgroundItems();
  gb.pickRandomSeed();
  loop();
}


//###########################
//##### Game Loop ###########
//###########################
void loop(){
  while(1){
    if(gb.update()){
      game_manageGlobalCounter();
      
      switch ( game.gameStatus )
      {
         //####################################
         case GAMEMAKERS:
            outputScreen_gamemakers();
            button_check(GAMEMAKERS);
            break;

         //#################################### 
         case TITLESCREEN:
            outputScreen_clear();
            outputScreen_title();
            button_check(TITLESCREEN);
            break;


         //#################################### 
         case CONTROLS:
            outputScreen_clear();
            outputScreen_controls();
            button_check(CONTROLS);
            break;

         //#################################### 
         case CREDITS:
            outputScreen_clear();
            outputScreen_credits();
            button_check(CREDITS);
            break;

         //####################################  
         case MENU:
            outputScreen_clear();
            outputScreen_menu();
            button_check(MENU);
            break;
            
         //####################################  
         case GAME:
            game_playerBulletsPosition();
            game_ennemiesPositions();
            game_ennemiesBullets();
            outputScreen_clear();
            outputScreen_game();
            button_check(GAME);
            game_checkEnnemyDamages();
            game_checkPlayerDamages();
            break;                       
         //####################################  
         case MENUPAUSE:
            outputScreen_clear();
            outputScreen_menu();
            button_check(MENUPAUSE);
            break;

         //####################################                     
         default:
            game.gameStatus = GAMEMAKERS;
            break;
      }
    }  
  }
}


