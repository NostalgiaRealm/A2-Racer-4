
/* ==== FUN_00406f40 @ 00406f40 ==== 
 * signature: undefined4 __thiscall FUN_00406f40(void * this, void * param_1)
 * body: 00406f40-00406f6f
 */

undefined4 __thiscall FUN_00406f40(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if (*piVar3 == -1) break;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 6;
  } while (iVar1 < 10);
  if (iVar1 == 10) {
    return 0;
  }
  uVar2 = FUN_00406a10((void *)((int)this + iVar1 * 0x18),param_1);
  return uVar2;
}


