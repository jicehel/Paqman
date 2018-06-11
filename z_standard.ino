//----------------------------------------------------------------------------
void showgameover() {
  gb.display.clear();
  gb.display.setColor(BLACK);
  gb.display.fillRect(22,16,39,9);
   gb.display.setColor(BLUE);
  gb.display.cursorX=24;
  gb.display.cursorY=18;
  gb.display.print("GAME OVER");
  gb.display.drawRect(22,16,39,9);
  gb.display.setColor(WHITE);
  gb.display.cursorX=4;
  gb.display.cursorY=42;
  gb.display.print("PRESS B TO CONTINUE");
  if (gb.buttons.pressed(BUTTON_B)) {
    gamestatus="title";
    gb.sound.playOK();
  }      
}
//----------------------------------------------------------------------------
void showtitle() {
  gb.display.clear();
  gb.display.setColor(WHITE);
  if (score > highscore) { highscore = score; }
  gb.display.cursorX=0;
  gb.display.cursorY=0;   
  gb.display.print("  LAST         HIGH");
  gb.display.cursorX=14-2*(score>9)-2*(score>99)-2*(score>999);
  gb.display.cursorY=6;
  gb.display.print(score);
  gb.display.cursorX=66-2*(highscore>9)-2*(highscore>99)-2*(highscore>999);
  gb.display.cursorY=6;
  gb.display.print(highscore);
  gb.display.setColor(YELLOW);
  gb.display.drawBitmap(10,18,gamelogo);
  gb.display.cursorX=0;
  gb.display.cursorY=56;
  gb.display.setColor(WHITE);
  gb.display.print("A: PLAY   MENU: QUIT");
  if (gb.buttons.pressed(BUTTON_A)) {
    gamestatus="newgame";
    gb.sound.playOK();
  }
  if (gb.buttons.pressed(BUTTON_MENU)) {
    // gb.titleScreen(F("Yoda's"),gamelogo);
  }
}
/*
//----------------------------------------------------------------------------
void playsoundfx(int fxno, int channel) {
  gb.sound.command(0,soundfx[fxno][6],0,channel); // set volume
  gb.sound.command(1,soundfx[fxno][0],0,channel); // set waveform
  gb.sound.command(2,soundfx[fxno][5],-soundfx[fxno][4],channel); // set volume slide
  gb.sound.command(3,soundfx[fxno][3],soundfx[fxno][2]-58,channel); // set pitch slide
  gb.sound.playNote(soundfx[fxno][1],soundfx[fxno][7],channel); // play note
} */

