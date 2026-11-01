
/* ==== FUN_0055b758 @ 0055b758 ==== 
 * signature: uint __cdecl FUN_0055b758(uint param_1, int * param_2)
 * body: 0055b758-0055b84c
 */

uint __cdecl FUN_0055b758(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = param_2;
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
LAB_0055b82a:
    piVar2 = param_2 + 1;
    *piVar2 = *piVar2 + -2;
    if (*piVar2 < 0) {
      param_1 = FUN_00563b6d(param_1 & 0xffff,param_2);
    }
    else {
      *(WCHAR *)*param_2 = (WCHAR)param_1;
      *param_2 = *param_2 + 2;
    }
    return param_1;
  }
  uVar6 = param_2[4];
  if (uVar6 == 0xffffffff) {
    puVar4 = &DAT_005c8ac8;
  }
  else {
    puVar4 = (undefined *)((&DAT_007500a0)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 8);
  }
  if ((puVar4[4] & 0x80) == 0) goto LAB_0055b82a;
  iVar5 = FUN_00563c91((LPSTR)&param_2,(WCHAR)param_1);
  if (iVar5 == -1) {
    DAT_0074dc60 = 0x2a;
    uVar6 = 0xffffffff;
    goto LAB_0055b7b1;
  }
  if (iVar5 == 1) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = (byte)param_2;
    if (-1 < *piVar1) {
      *(byte *)*piVar2 = (byte)param_2;
      goto LAB_0055b7cf;
    }
LAB_0055b7d8:
    uVar6 = FUN_0055e48c((int)(char)bVar3,piVar2);
  }
  else {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar6 = FUN_0055e48c((int)(char)(byte)param_2,piVar2);
    }
    else {
      *(byte *)*piVar2 = (byte)param_2;
      *piVar2 = *piVar2 + 1;
      uVar6 = (uint)param_2 & 0xff;
    }
    if (uVar6 == 0xffffffff) goto LAB_0055b7b1;
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = param_2._1_1_;
    if (*piVar1 < 0) goto LAB_0055b7d8;
    *(byte *)*piVar2 = param_2._1_1_;
    param_2._0_1_ = param_2._1_1_;
LAB_0055b7cf:
    uVar6 = (uint)(byte)param_2;
    *piVar2 = *piVar2 + 1;
  }
  if (uVar6 != 0xffffffff) {
    return CONCAT22((short)(uVar6 >> 0x10),(WCHAR)param_1);
  }
LAB_0055b7b1:
  return CONCAT22((short)(uVar6 >> 0x10),0xffff);
}


