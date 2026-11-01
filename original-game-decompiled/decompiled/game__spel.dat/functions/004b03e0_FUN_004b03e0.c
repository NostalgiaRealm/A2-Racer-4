
/* ==== FUN_004b03e0 @ 004b03e0 ==== 
 * signature: undefined4 __cdecl FUN_004b03e0(int param_1)
 * body: 004b03e0-004b0465
 */

undefined4 __cdecl FUN_004b03e0(int param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float local_4c [19];
  
  iVar3 = 0;
  DAT_00719b48 = 0;
  FUN_004afd20(param_1);
  FUN_004afbd0(param_1,local_4c);
  if (0 < DAT_00719b48) {
    pfVar2 = (float *)&DAT_00715fe8;
    do {
      uVar1 = FUN_004b0470(pfVar2,local_4c);
      if ((char)uVar1 == '\x01') {
LAB_004b045e:
        return uVar1 & 0xffffff00;
      }
      uVar1 = FUN_004b0470(local_4c,pfVar2);
      if ((char)uVar1 == '\x01') goto LAB_004b045e;
      uVar1 = FUN_004b05e0(pfVar2,local_4c);
      if ((char)uVar1 == '\x01') goto LAB_004b045e;
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 0x13;
    } while (iVar3 < DAT_00719b48);
  }
  return CONCAT31((int3)((uint)DAT_00719b48 >> 8),1);
}


