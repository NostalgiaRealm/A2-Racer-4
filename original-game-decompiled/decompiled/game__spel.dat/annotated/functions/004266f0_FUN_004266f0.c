
/* ==== FUN_004266f0 @ 004266f0 ==== 
 * signature: undefined __thiscall FUN_004266f0(void * this, int param_1)
 * body: 004266f0-004267f2
 */

void __thiscall FUN_004266f0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0x14 + 0x10);
  iVar2 = FUN_00425300((int)puVar1);
  if ((*(int *)((int)this + 0xc) < iVar2) &&
     (*(char *)(param_1 * 0x10 + 0xde6ac + (int)this) == '\0')) {
    iVar2 = FUN_00425230(puVar1);
    iVar2 = iVar2 * 0xf0;
    if (4 < *(int *)(DAT_00715e50 + iVar2 + 0xac)) {
      iVar3 = FUN_004a8600((void *)(DAT_00715e50 + iVar2),0);
      *(undefined4 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x7c) = 0x42700000;
      iVar3 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),1);
      *(undefined4 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x7c) = 0x42700000;
      iVar3 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),2);
      *(undefined4 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x7c) = 0x42700000;
      iVar2 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),3);
      *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x7c) = 0x42700000;
      *(undefined1 *)(param_1 * 0x10 + 0xde6ac + (int)this) = 1;
    }
  }
  return;
}


