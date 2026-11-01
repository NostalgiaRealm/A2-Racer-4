
/* ==== FUN_0055b84d @ 0055b84d ==== 
 * signature: uint __cdecl FUN_0055b84d(uint param_1, int * param_2)
 * body: 0055b84d-0055b935
 */

uint __cdecl FUN_0055b84d(uint param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint in_EAX;
  undefined *puVar3;
  WCHAR WVar4;
  
  piVar2 = param_2;
  WVar4 = (WCHAR)param_1;
  if ((WVar4 == L'\xffff') ||
     ((in_EAX = param_2[3], (in_EAX & 1) == 0 && (((in_EAX & 0x80) == 0 || ((in_EAX & 2) != 0))))))
  goto LAB_0055b8c8;
  if (param_2[2] == 0) {
    FUN_00562e5d(param_2);
  }
  in_EAX = piVar2[3];
  if ((in_EAX & 0x40) == 0) {
    uVar1 = piVar2[4];
    if (uVar1 == 0xffffffff) {
      puVar3 = &DAT_005c8ac8;
    }
    else {
      puVar3 = (undefined *)((&DAT_007500a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
    }
    if ((puVar3[4] & 0x80) != 0) {
      in_EAX = FUN_00563c91((LPSTR)&param_1,WVar4);
      if (in_EAX != 0xffffffff) {
        if (*piVar2 == piVar2[2]) {
          if (piVar2[1] != 0) goto LAB_0055b8c8;
          *piVar2 = *piVar2 + in_EAX;
        }
        if (in_EAX != 1) {
          *piVar2 = *piVar2 + -1;
          *(undefined1 *)*piVar2 = param_1._1_1_;
        }
        *piVar2 = *piVar2 + -1;
        *(undefined1 *)*piVar2 = (undefined1)param_1;
        piVar2[1] = piVar2[1] + in_EAX;
        uVar1 = piVar2[3];
        piVar2[3] = uVar1 & 0xffffffef | 1;
        return CONCAT22((short)((uVar1 & 0xffffffef) >> 0x10),WVar4);
      }
      DAT_0074dc60 = 0x2a;
      goto LAB_0055b8c8;
    }
  }
  if (*piVar2 == piVar2[2]) {
    if (piVar2[1] != 0) {
LAB_0055b8c8:
      return CONCAT22((short)(in_EAX >> 0x10),0xffff);
    }
    *piVar2 = *piVar2 + 2;
  }
  piVar2[1] = piVar2[1] + 2;
  *piVar2 = *piVar2 + -2;
  piVar2[3] = in_EAX & 0xffffffef | 1;
  *(WCHAR *)*piVar2 = WVar4;
  return CONCAT22((short)((uint)*piVar2 >> 0x10),*(undefined2 *)*piVar2);
}


