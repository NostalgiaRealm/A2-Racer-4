
/* ==== FUN_0055856d @ 0055856d ==== 
 * signature: undefined __cdecl FUN_0055856d(int param_1, uint param_2)
 * body: 0055856d-0055861a
 */

void __cdecl FUN_0055856d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_0055e24c();
    }
LAB_005585fc:
    if (DAT_0074dc40 == 0) {
      __startOneArgErrorHandling(&DAT_005c7b90,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_0055e235();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_005585fc;
    if (DAT_0074dc40 == 0) {
      __math_exit(&DAT_005c7b90,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


