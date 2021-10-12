#include "Keyboard.h"
#include "HIDKeyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Inicia o script */
void setup()
{
  Keyboard.begin();

  //FAZ O PRINTSCREEN NO WINDOWS 10.
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('s');
  Keyboard.releaseAll(); 
  delay(1000);
   typeKey(KEY_TAB);
   delay(250);
   typeKey(KEY_TAB);
   delay(260);
   typeKey(KEY_TAB);
   delay(255);
   typeKey(KEY_TAB);
   delay(200); 
   typeKey(KEY_RETURN); 
  //FIM DO PRINTSCREEN, O PRINT AGORA ESTÁ NA AREA DE TRANFERENCIA DO WINDOWS.

  // O RESTO DO CÓDIGO É SÓ UMA PROVA DE QUE FUNCIONA... CASO ESTEJA OK ELE IRÁ COLAR O PRINT NO PAINT.       
    
  // ABRE O PAINT
  delay(650);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1200);
  Keyboard.print("mspaint");
  typeKey(KEY_RETURN);

  // COLA O PRINTSCREEN
  delay(3400);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  delay(100);
  Keyboard.releaseAll();

  Keyboard.end();
}
void loop() {}
