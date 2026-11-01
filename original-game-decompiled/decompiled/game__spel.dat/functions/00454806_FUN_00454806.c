
/* ==== FUN_00454806 @ 00454806 ==== 
 * signature: undefined __fastcall FUN_00454806(int param_1, char param_2)
 * body: 00454806-00454807
 */

void __fastcall FUN_00454806(int param_1,char param_2)

{
  int in_EAX;
  char unaff_BL;
  int unaff_EDI;
  
  *(char *)(unaff_EDI + 0x45) = *(char *)(unaff_EDI + 0x45) + '\x01';
  *(char *)(param_1 + -0x46ffbab9) = *(char *)(param_1 + -0x46ffbab9) + unaff_BL;
  *(char *)(in_EAX + -0x6f6f6f70) = *(char *)(in_EAX + -0x6f6f6f70) + param_2;
  if ((DAT_00750060 & 1) == 0) {
    DAT_00750060 = DAT_00750060 | 1;
  }
  FUN_005584e0(0x4d1400);
  return;
}


