
/* ==== FUN_004a7d70 @ 004a7d70 ==== 
 * signature: undefined __thiscall FUN_004a7d70(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, int param_11, undefined4 param_12)
 * body: 004a7d70-004a7ec9
 */

void __thiscall
FUN_004a7d70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,int param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0x2c) = param_11;
  *(undefined4 *)((int)this + 0x30) = param_12;
  *(undefined4 *)((int)this + 0x6c) = param_10;
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar2 = FUN_004b4c70(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,FUN_004b5620)
  ;
  *(int *)((int)this + 0x24) = iVar2;
  *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xc) = param_1;
  *(undefined4 *)(DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9 + 0xa1) = 2;
  *(undefined1 *)(DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9 + 0x90) = 1;
  FUN_004b5770(DAT_0073b0d0 + *(int *)((int)this + 0x24) * 0xa9);
  iVar2 = *(int *)((int)this + 0x24);
  iVar1 = *(int *)(DAT_0073b0d0 + iVar2 + iVar2 * 0xa8);
  iVar2 = DAT_0073b0d0 + iVar2 + iVar2 * 0xa8;
  if (iVar1 == 1) {
    param_11 = *(int *)(iVar2 + 0x99);
  }
  else if (iVar1 == 2) {
    param_11 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) * 9 + 4 + DAT_0073b168) +
                                *(int *)(iVar2 + 8) * 4) * 0x10 + DAT_0073b120);
  }
  if (*(int *)(DAT_00719c28 + param_11 * 4) != 0) {
    *(int *)((int)this + 0xe8) = param_11;
    iVar2 = FUN_004bca20(param_11);
    *(int *)((int)this + 0xec) = iVar2;
  }
  return;
}


