
/* ==== FUN_0040ab70 @ 0040ab70 ==== 
 * signature: undefined FUN_0040ab70(void)
 * body: 0040ab70-0040abb0
 */

void FUN_0040ab70(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_004475f8;
  if ((param_1 != 1) && (piVar1 = DAT_004475fc, param_1 != 2)) {
    if (param_1 - 3U < 0x16) {
      piVar1 = FUN_0040a938(*(int **)(&DAT_0044621c + param_1 * 8),'\x01',
                            *(undefined4 **)(&DAT_00446220 + param_1 * 8));
    }
    else {
      piVar1 = (int *)FUN_0040aaf0();
    }
  }
  FUN_0040346c(piVar1);
  return;
}


