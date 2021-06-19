void game_init(){
  game.gameStatus = GAMEMAKERS;
  game.globalTimer = 0;
  game.pause=0;
  game.menuOption=1;
  game.menuPauseOption=0;
}

void game_initPlayer(){
  player.yPosition = 0;
  player.xPosition = 0;
  player.goingUP=false;
  player.goingRIGHT=false;
  player.goingDOWN=false;
  player.goingLEFT=false;
  player.score=0;
  player.life=10;
  player.timer=0;
}

void  game_initBullets(){
  for(int i = 0; i<5;i++){
    playerBullet[i] = false;
  }  
}


void game_initEnnemies(){
  for(int i=0; i<NBENNEMIES; i++){
    game_initEnnemy(i,0);
  }
}


void game_initEnnemy(int i,int z){
  switch(i){
    case 0:  ennemy[i].xPosition=1;    ennemy[i].yPosition=52;  if(z==0){ennemy[i].zPosition=30; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 1:  ennemy[i].xPosition=32;   ennemy[i].yPosition=59;  if(z==0){ennemy[i].zPosition=100;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 2:  ennemy[i].xPosition=54;   ennemy[i].yPosition=52;  if(z==0){ennemy[i].zPosition=60; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 3:  ennemy[i].xPosition=66;   ennemy[i].yPosition=64;  if(z==0){ennemy[i].zPosition=40; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 4:  ennemy[i].xPosition=98;   ennemy[i].yPosition=62;  if(z==0){ennemy[i].zPosition=120;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 5:  ennemy[i].xPosition=131;  ennemy[i].yPosition=52;  if(z==0){ennemy[i].zPosition=100;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;      
    case 6:  ennemy[i].xPosition=134;  ennemy[i].yPosition=50;  if(z==0){ennemy[i].zPosition=20; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 7:  ennemy[i].xPosition=135;  ennemy[i].yPosition=59;  if(z==0){ennemy[i].zPosition=30; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 8:  ennemy[i].xPosition=137;  ennemy[i].yPosition=53;  if(z==0){ennemy[i].zPosition=35; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 9:  ennemy[i].xPosition=139;  ennemy[i].yPosition=51;  if(z==0){ennemy[i].zPosition=88; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 10: ennemy[i].xPosition=143;  ennemy[i].yPosition=55;  if(z==0){ennemy[i].zPosition=56; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 11: ennemy[i].xPosition=144;  ennemy[i].yPosition=63;  if(z==0){ennemy[i].zPosition=30; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 12: ennemy[i].xPosition=209;  ennemy[i].yPosition=52;  if(z==0){ennemy[i].zPosition=90; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 13: ennemy[i].xPosition=219;  ennemy[i].yPosition=69;  if(z==0){ennemy[i].zPosition=210;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 14: ennemy[i].xPosition=231;  ennemy[i].yPosition=55;  if(z==0){ennemy[i].zPosition=65; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 15: ennemy[i].xPosition=282;  ennemy[i].yPosition=57;  if(z==0){ennemy[i].zPosition=20; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 16: ennemy[i].xPosition=297;  ennemy[i].yPosition=83;  if(z==0){ennemy[i].zPosition=200;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 17: ennemy[i].xPosition=333;  ennemy[i].yPosition=51;  if(z==0){ennemy[i].zPosition=56; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 18: ennemy[i].xPosition=335;  ennemy[i].yPosition=54;  if(z==0){ennemy[i].zPosition=75; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 19: ennemy[i].xPosition=338;  ennemy[i].yPosition=51;  if(z==0){ennemy[i].zPosition=12; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 20: ennemy[i].xPosition=338;  ennemy[i].yPosition=57;  if(z==0){ennemy[i].zPosition=54; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 21: ennemy[i].xPosition=340;  ennemy[i].yPosition=54;  if(z==0){ennemy[i].zPosition=32; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 22: ennemy[i].xPosition=344;  ennemy[i].yPosition=47;  if(z==0){ennemy[i].zPosition=98; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 23: ennemy[i].xPosition=345;  ennemy[i].yPosition=53;  if(z==0){ennemy[i].zPosition=55; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 24: ennemy[i].xPosition=389;  ennemy[i].yPosition=47;  if(z==0){ennemy[i].zPosition=99; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 25: ennemy[i].xPosition=406;  ennemy[i].yPosition=65;  if(z==0){ennemy[i].zPosition=55; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 26: ennemy[i].xPosition=450;  ennemy[i].yPosition=57;  if(z==0){ennemy[i].zPosition=44; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 27: ennemy[i].xPosition=484;  ennemy[i].yPosition=72;  if(z==0){ennemy[i].zPosition=33; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 28: ennemy[i].xPosition=496;  ennemy[i].yPosition=67;  if(z==0){ennemy[i].zPosition=78; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 29: ennemy[i].xPosition=532;  ennemy[i].yPosition=72;  if(z==0){ennemy[i].zPosition=67; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 30: ennemy[i].xPosition=539;  ennemy[i].yPosition=84;  if(z==0){ennemy[i].zPosition=63; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 31: ennemy[i].xPosition=571;  ennemy[i].yPosition=59;  if(z==0){ennemy[i].zPosition=45; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 32: ennemy[i].xPosition=624;  ennemy[i].yPosition=55;  if(z==0){ennemy[i].zPosition=30; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 33: ennemy[i].xPosition=627;  ennemy[i].yPosition=59;  if(z==0){ennemy[i].zPosition=36; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 34: ennemy[i].xPosition=632;  ennemy[i].yPosition=77;  if(z==0){ennemy[i].zPosition=89; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 35: ennemy[i].xPosition=635;  ennemy[i].yPosition=62;  if(z==0){ennemy[i].zPosition=88; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 36: ennemy[i].xPosition=635;  ennemy[i].yPosition=68;  if(z==0){ennemy[i].zPosition=112;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 37: ennemy[i].xPosition=644;  ennemy[i].yPosition=71;  if(z==0){ennemy[i].zPosition=56; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 38: ennemy[i].xPosition=649;  ennemy[i].yPosition=63;  if(z==0){ennemy[i].zPosition=26; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 39: ennemy[i].xPosition=680;  ennemy[i].yPosition=75;  if(z==0){ennemy[i].zPosition=34; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 40: ennemy[i].xPosition=715;  ennemy[i].yPosition=90;  if(z==0){ennemy[i].zPosition=42; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 41: ennemy[i].xPosition=750;  ennemy[i].yPosition=65;  if(z==0){ennemy[i].zPosition=83; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 42: ennemy[i].xPosition=787;  ennemy[i].yPosition=66;  if(z==0){ennemy[i].zPosition=54; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=1;  break;
    case 43: ennemy[i].xPosition=808;  ennemy[i].yPosition=82;  if(z==0){ennemy[i].zPosition=99; }else{ennemy[i].zPosition=z;} ennemy[i].globalDirection= true;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
    case 44: ennemy[i].xPosition=817;  ennemy[i].yPosition=75;  if(z==0){ennemy[i].zPosition=103;}else{ennemy[i].zPosition=z;} ennemy[i].globalDirection=false;  ennemy[i].isActive=false; ennemy[i].life=ENNEMY_ALIVE;  ennemy[i].type=2;  break;
  }
}

void   game_initEnnemiesBullets(){
  for(int i=0; i<NBENNEMIES; i++){
    bullets[i].xPosition=0;
    bullets[i].yPosition=0;
    bullets[i].globalDirection=0;
    bullets[i].globalXDirection=0;
    bullets[i].globalYDirection=0;
    bullets[i].life=0;
    bullets[i].anim=0;
  }  
}



void game_initBackgroundItems(){
  cloudInfo[0].xPosition = -80;
  cloudInfo[0].yPosition = -25;
  cloudInfo[0].type = 0;
  cloudInfo[1].xPosition = 0;
  cloudInfo[1].yPosition = -25;
  cloudInfo[1].type = 0;  
  cloudInfo[2].xPosition = 80;
  cloudInfo[2].yPosition = -25;
  cloudInfo[2].type = 0;
}

void game_skyPosition(bool isGoingToRight){
  if(isGoingToRight==false){
    cloudInfo[0].xPosition = cloudInfo[0].xPosition + 3;
    cloudInfo[1].xPosition = cloudInfo[1].xPosition + 3;
    cloudInfo[2].xPosition = cloudInfo[2].xPosition + 3;
    if(cloudInfo[0].xPosition>0){
      cloudInfo[0].xPosition = cloudInfo[0].xPosition - 80;
      cloudInfo[1].xPosition = cloudInfo[1].xPosition - 80;
      cloudInfo[2].xPosition = cloudInfo[2].xPosition - 80;
    }
  }else{
    cloudInfo[0].xPosition = cloudInfo[0].xPosition - 3;
    cloudInfo[1].xPosition = cloudInfo[1].xPosition - 3;
    cloudInfo[2].xPosition = cloudInfo[2].xPosition - 3;
    if(cloudInfo[2].xPosition<0){
      cloudInfo[0].xPosition = cloudInfo[0].xPosition + 160;
      cloudInfo[1].xPosition = cloudInfo[1].xPosition + 160;
      cloudInfo[2].xPosition = cloudInfo[2].xPosition + 160;
    }
  }
}

void game_manageGlobalCounter(){
  switch ( game.gameStatus ){
     //#################################### 
     case GAMEMAKERS:
        if(game.globalTimer<30){
          game.globalTimer = game.globalTimer +1;
        }else{
          game.globalTimer = 0;
          game.gameStatus = TITLESCREEN;
        }
        break;

     //####################################  
     case TITLESCREEN:
        if(game.globalTimer<30){
          game.globalTimer = game.globalTimer +1;
        }else{
          game.globalTimer = 0;
          game.gameStatus = MENU;
        }
        break;
     //####################################  
     case MENU:
        break;
        
     //####################################  
     case CONTROLS:
        break;
        
     //####################################  
     case CREDITS:
        break;


     //####################################  
     case GAME:
        game.globalTimer = game.globalTimer +1;
        if(game.globalTimer>29){game.globalTimer=0;}
        break;

     //####################################  
     case MENUPAUSE:
        break;

                          
     default:
        game.gameStatus = GAMEMAKERS;
        break;
  }
}


void game_playerBulletsPosition(){
  for(int i= 0; i<5-1; i++){ 
    playerBullet[i] = playerBullet[i+1]; 
  }
}

void game_checkEnnemyDamages(){
    for(int i = 0;i<NBENNEMIES;i++){
      int fireX = 39;
      int fireY = 32;    
      int ennemyRealX = game_calcRealX(ennemy[i].xPosition);    
      int ennemyRealY = game_calcRealY(ennemy[i].yPosition)+2;
      switch(ennemy[i].life){
        case ENNEMY_DEAD:
          break;   

        case ENNEMY_PARADEAD:
          ennemy[i].type=ennemy[i].type-1;
          if(ennemy[i].type<0){
            ennemy[i].life=ENNEMY_DEAD;
            ennemy[i].score=0;
          }
          break;   
          
        case ENNEMY_PARACHUTE: 
          if(playerBullet[0]==true or playerBullet[1] == true){
            if(fireX>=ennemyRealX-4 and fireX<=ennemyRealX+4 and fireY>=ennemyRealY-4 and fireY<=ennemyRealY+4){
              ennemy[i].life=ENNEMY_PARADEAD;
              ennemy[i].type=5;
              ennemy[i].score=50;
              player.score = player.score + 50;
            }
          }
          break;    
                 
        case ENNEMY_EXPLOZ4:  
          ennemy[i].life=ENNEMY_PARACHUTE;
          ennemy[i].score=0;
          break; 
          
        case ENNEMY_EXPLOZ3: 
          ennemy[i].life=ENNEMY_EXPLOZ4;
          break;
          
        case ENNEMY_EXPLOZ2: 
          ennemy[i].life=ENNEMY_EXPLOZ3;
          break; 
          
        case ENNEMY_EXPLOZ1: 
          ennemy[i].life=ENNEMY_EXPLOZ2;
          break;   

        case ENNEMY_DAMAGED: 
          if(ennemy[i].zPosition<ENNEMY_DISTANCE5){
            if(playerBullet[0]==true or playerBullet[1] == true){
              int hitBox=0;
              if(ennemy[i].zPosition>=ENNEMY_DISTANCE4 and ennemy[i].zPosition<ENNEMY_DISTANCE5){
                hitBox = 2;
              }
              if(ennemy[i].zPosition>=ENNEMY_DISTANCE3 and ennemy[i].zPosition<ENNEMY_DISTANCE4){
                hitBox = 3;
              }
              if(ennemy[i].zPosition>=ENNEMY_DISTANCE2 and ennemy[i].zPosition<ENNEMY_DISTANCE3){
                hitBox = 4;
              }
              if(ennemy[i].zPosition>=ENNEMY_DISTANCE1 and ennemy[i].zPosition<ENNEMY_DISTANCE2){
                hitBox = 6;
              }
              if(ennemy[i].zPosition<ENNEMY_DISTANCE1){
                hitBox = 8;
              }

              if(hitBox>0){
                if(fireX>=ennemyRealX-hitBox and fireX<=ennemyRealX+hitBox and fireY>=ennemyRealY-hitBox and fireY<=ennemyRealY+hitBox){
                  ennemy[i].life=ENNEMY_EXPLOZ1;
                  if(ennemy[i].zPosition>=ENNEMY_DISTANCE4 and ennemy[i].zPosition<ENNEMY_DISTANCE5){
                    player.score = player.score + 1000;
                    ennemy[i].score=1000;
                  }
                  if(ennemy[i].zPosition>=ENNEMY_DISTANCE3 and ennemy[i].zPosition<ENNEMY_DISTANCE4){
                    player.score = player.score + 750;
                    ennemy[i].score=750;
                  }
                  if(ennemy[i].zPosition>=ENNEMY_DISTANCE2 and ennemy[i].zPosition<ENNEMY_DISTANCE3){
                    player.score = player.score + 500;
                    ennemy[i].score=500;
                  }
                  if(ennemy[i].zPosition>=ENNEMY_DISTANCE1 and ennemy[i].zPosition<ENNEMY_DISTANCE2){
                    player.score = player.score + 2500;
                    ennemy[i].score=250;
                  }
                  if(ennemy[i].zPosition<ENNEMY_DISTANCE1){
                    player.score = player.score + 100;
                    ennemy[i].score=100;
                  }
                }
              }
            }
          }
          break;
          
        case ENNEMY_ALIVE: 
          if(playerBullet[0]==true or playerBullet[1] == true){
            int hitBox=0;
            if(ennemy[i].zPosition>=ENNEMY_DISTANCE4 and ennemy[i].zPosition<ENNEMY_DISTANCE5){
              hitBox = 2;
            }
            if(ennemy[i].zPosition>=ENNEMY_DISTANCE3 and ennemy[i].zPosition<ENNEMY_DISTANCE4){
              hitBox = 3;
            }
            if(ennemy[i].zPosition>=ENNEMY_DISTANCE2 and ennemy[i].zPosition<ENNEMY_DISTANCE3){
              hitBox = 4;
            }
            if(ennemy[i].zPosition>=ENNEMY_DISTANCE1 and ennemy[i].zPosition<ENNEMY_DISTANCE2){
              hitBox = 6;
            }
            if(ennemy[i].zPosition<ENNEMY_DISTANCE1){
              hitBox = 8;
            }

            if(hitBox>0){
              if(fireX>=ennemyRealX-hitBox and fireX<=ennemyRealX+hitBox and fireY>=ennemyRealY-hitBox and fireY<=ennemyRealY+hitBox){
                ennemy[i].life=ENNEMY_DAMAGED;
              }
            }
          }
          break; 
      }
   }
}


void game_checkPlayerDamages(){
  for(int i=0; i<NBENNEMIES; i++){
    
  }
}

void game_ennemiesPositions(){
  for(int i = 0;i<NBENNEMIES;i++){
    int ennemyRealX = game_calcRealX(ennemy[i].xPosition)-8;    
    int ennemyRealY = game_calcRealY(ennemy[i].yPosition)-8;
    
    if(ennemy[i].zPosition>0){
      ennemy[i].zPosition=ennemy[i].zPosition-1;
    }else{
      if(ennemy[i].life==ENNEMY_ALIVE or ennemy[i].life==ENNEMY_DAMAGED){
        game_initEnnemy(i,120);
      }
      if(ennemy[i].life==ENNEMY_PARACHUTE){
        ennemy[i].zPosition=120;
      }
    }
    switch(ennemy[i].life){
      case ENNEMY_ALIVE: 
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE4 and ennemy[i].zPosition<ENNEMY_DISTANCE5){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition-1; ennemy[i].yPosition=ennemy[i].yPosition+0;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition+1; ennemy[i].yPosition=ennemy[i].yPosition+0;}
        }
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE3 and ennemy[i].zPosition<ENNEMY_DISTANCE4){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition-1; ennemy[i].yPosition=ennemy[i].yPosition+1;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition+1; ennemy[i].yPosition=ennemy[i].yPosition+1;}
        }
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE2 and ennemy[i].zPosition<ENNEMY_DISTANCE3){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition-0; ennemy[i].yPosition=ennemy[i].yPosition+2;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition+0; ennemy[i].yPosition=ennemy[i].yPosition+2;}
        }
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE1 and ennemy[i].zPosition<ENNEMY_DISTANCE2){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition+1; ennemy[i].yPosition=ennemy[i].yPosition+2;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition-1; ennemy[i].yPosition=ennemy[i].yPosition+2;}
        }
        if(ennemy[i].zPosition<ENNEMY_DISTANCE1){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition+2; ennemy[i].yPosition=ennemy[i].yPosition+2;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition-2; ennemy[i].yPosition=ennemy[i].yPosition+2;}
        }
        break;

      case ENNEMY_DAMAGED: 
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE4 and ennemy[i].zPosition<ENNEMY_DISTANCE5){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition-1; ennemy[i].yPosition=ennemy[i].yPosition+0;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition+1; ennemy[i].yPosition=ennemy[i].yPosition+0;}
        }
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE3 and ennemy[i].zPosition<ENNEMY_DISTANCE4){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition-1; ennemy[i].yPosition=ennemy[i].yPosition+1;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition+1; ennemy[i].yPosition=ennemy[i].yPosition+1;}
        }
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE2 and ennemy[i].zPosition<ENNEMY_DISTANCE3){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition-0; ennemy[i].yPosition=ennemy[i].yPosition+2;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition+0; ennemy[i].yPosition=ennemy[i].yPosition+2;}
        }
        if(ennemy[i].zPosition>=ENNEMY_DISTANCE1 and ennemy[i].zPosition<ENNEMY_DISTANCE2){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition+1; ennemy[i].yPosition=ennemy[i].yPosition+2;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition-1; ennemy[i].yPosition=ennemy[i].yPosition+2;}
        }
        if(ennemy[i].zPosition<ENNEMY_DISTANCE1){
          if(ennemy[i].globalDirection==true) {ennemy[i].xPosition=ennemy[i].xPosition+2; ennemy[i].yPosition=ennemy[i].yPosition+2;}
          if(ennemy[i].globalDirection==false){ennemy[i].xPosition=ennemy[i].xPosition-2; ennemy[i].yPosition=ennemy[i].yPosition+2;}
        }
        break;
      
      case ENNEMY_EXPLOZ1: break;
      case ENNEMY_EXPLOZ2: break;
      case ENNEMY_EXPLOZ3: break;
      case ENNEMY_EXPLOZ4: break;
      
      case ENNEMY_PARACHUTE: 
        ennemy[i].yPosition=ennemy[i].yPosition+1;
        break;
        
      case ENNEMY_PARADEAD: break;
      case ENNEMY_DEAD: break;
    }
  }
}

void game_ennemiesBullets(){
  for(int i=0; i<NBENNEMIES; i++){
    if(ennemy[i].zPosition==ENNEMY_DISTANCE1 and (ennemy[i].life==ENNEMY_ALIVE or ennemy[i].life==ENNEMY_DAMAGED)){
      bullets[i].life = 80;
      bullets[i].xPosition = ennemy[i].xPosition;
      bullets[i].yPosition = ennemy[i].yPosition;
      if(ennemy[i].globalDirection==false){
        bullets[i].xPosition = bullets[i].xPosition + 1;
        bullets[i].yPosition = bullets[i].yPosition + 5;
        bullets[i].globalDirection=11;
        bullets[i].globalXDirection=-2;
        bullets[i].globalYDirection=1;
      }else{
        bullets[i].xPosition = bullets[i].xPosition - 1;
        bullets[i].yPosition = bullets[i].yPosition + 5;
        bullets[i].globalDirection=5;
        bullets[i].globalXDirection=2;
        bullets[i].globalYDirection=1;
      }
    }
    //logic to be completed
    
    if(bullets[i].life>0){
      bullets[i].life = bullets[i].life -1;
      bullets[i].xPosition=bullets[i].xPosition + bullets[i].globalXDirection;
      bullets[i].yPosition=bullets[i].yPosition + bullets[i].globalYDirection;
      if(bullets[i].life==0){bullets[i].anim=7;}
    }else{
      if(bullets[i].anim>0){
        bullets[i].anim = bullets[i].anim-1;
      }else{
        bullets[i].xPosition=0;
        bullets[i].yPosition=0;
        bullets[i].globalDirection=0;
        bullets[i].globalXDirection=0;
        bullets[i].globalYDirection=0;
      }
    }
  } 
}


/*
int game_findNearestAirplane(){
  int test = 10000;
  int result = 0;
  for(int i=0; i < NBENNEMIES; i++){
    int ennemyRealX = game_calcRealX(ennemy[i].xPosition);    
    int ennemyRealY = game_calcRealY(ennemy[i].yPosition);
    if(ennemyRealX+ennemyRealY<test){
      test=ennemyRealX+ennemyRealY;
      result=i;
    }
  }
  return result;
}
*/


int game_calcRealX(int xPositionToRealPosition){
    int result = xPositionToRealPosition-player.xPosition;
    if(player.xPosition>=0 and player.xPosition<80 and xPositionToRealPosition>(WORLDWIDTH-80)){result = (xPositionToRealPosition-WORLDWIDTH)-player.xPosition;}
    if(player.xPosition>(WORLDWIDTH-80) and player.xPosition<=WORLDWIDTH and xPositionToRealPosition<80){result = (xPositionToRealPosition+WORLDWIDTH)-player.xPosition;}
     
    return result;
}

int game_calcRealY(int yPositionToRealPosition){
    int result = player.yPosition-(WORLDHEIGHT-yPositionToRealPosition); 
    return result;
}

