
/* ==== FUN_004cbb10 @ 004cbb10 ==== 
 * signature: uint __cdecl FUN_004cbb10(int * param_1, int param_2, int param_3, uint param_4, int param_5)
 * body: 004cbb10-004cbbe6
 */

uint __cdecl FUN_004cbb10(int *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_4;
  
  uVar3 = 0;
  FUN_004c3fa0((byte *)s__s__d__005b5e9c);
  FUN_004c3fa0((byte *)s_y____d___xsize____d___pitch____d_005b5e78);
  do {
    bVar1 = *(byte *)(param_3 * param_5 + param_2 + uVar3);
    uStack_4._0_3_ = CONCAT12(bVar1,(undefined2)uStack_4);
    if ((bVar1 & 0xc0) == 0xc0) {
      iVar2 = FUN_004cba70(param_2,uVar3,param_3,param_4 - uVar3,param_4);
      uStack_4 = CONCAT13((char)iVar2,(undefined3)uStack_4) | 0xc0000000;
      FUN_00558c1d((char *)((int)&uStack_4 + 3),1,1,param_1);
      FUN_00558c1d((char *)((int)&uStack_4 + 2),1,1,param_1);
      uVar3 = uVar3 + iVar2;
    }
    else {
      FUN_00558c1d((char *)((int)&uStack_4 + 2),1,1,param_1);
      uVar3 = uVar3 + 1;
    }
  } while (uVar3 < param_4);
  FUN_004c3fa0((byte *)s__s__d__005b5e9c);
  return uVar3;
}


