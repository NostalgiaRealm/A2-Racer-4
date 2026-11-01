
/* ==== TDockTree.vmt_000 @ 0042c990 ==== 
 * signature: undefined TDockTree.vmt_000(void)
 * body: 0042c990-0042c9a3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TDockTree_vmt_000(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                   *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x4b)) + -1;
  bVar1 = (byte)iVar2;
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),bVar1 - 2);
  if (bVar1 < 2) {
    *param_3 = *param_3 + 0xc;
    return uVar3;
  }
  param_3[1] = param_3[1] + 0xc;
  return uVar3;
}


