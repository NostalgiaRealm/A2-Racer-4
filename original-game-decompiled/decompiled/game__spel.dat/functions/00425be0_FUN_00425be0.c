
/* ==== FUN_00425be0 @ 00425be0 ==== 
 * signature: uint __fastcall FUN_00425be0(int * param_1)
 * body: 00425be0-00425c2b
 */

uint __fastcall FUN_00425be0(int *param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  uVar2 = in_EAX & 0xffffff00;
  if (*param_1 <
      *(int *)(DAT_0073b168 + *(int *)(param_1[0x387] * 0xa9 + 4 + DAT_0073b0d0) * 9) + -1) {
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    *(int *)(param_1[0x387] * 0xa9 + 8 + DAT_0073b0d0) = iVar1;
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}


