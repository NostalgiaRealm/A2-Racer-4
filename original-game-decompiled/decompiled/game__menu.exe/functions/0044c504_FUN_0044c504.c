
/* ==== FUN_0044c504 @ 0044c504 ==== 
 * signature: undefined4 __register FUN_0044c504(int param_1, int * param_2)
 * body: 0044c504-0044c552
 */

undefined4 FUN_0044c504(int param_1,int *param_2)

{
  if (*param_2 == 0x1a) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      SetThreadLocale(0x400);
      FUN_0040c35c();
    }
    if (*(char *)(param_1 + 0x4a) != '\0') {
      FUN_0044b668(DAT_004ac7d8);
      if (*(char *)(param_1 + 0x78) != '\0') {
        FUN_0044d814(param_1,'\0');
        FUN_0044d814(param_1,'\x01');
      }
    }
  }
  return 0;
}


