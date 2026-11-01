
/* ==== FUN_00559e6d @ 00559e6d ==== 
 * signature: undefined __cdecl FUN_00559e6d(int param_1, uint param_2)
 * body: 00559e6d-00559f1a
 */

void __cdecl FUN_00559e6d(int param_1,uint param_2)

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
LAB_00559efc:
    if (DAT_0074dc40 == 0) {
      __startOneArgErrorHandling(&DAT_005c7e80,0xe,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_0055e235();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00559efc;
    if (DAT_0074dc40 == 0) {
      __math_exit(&DAT_005c7e80,0xe,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


