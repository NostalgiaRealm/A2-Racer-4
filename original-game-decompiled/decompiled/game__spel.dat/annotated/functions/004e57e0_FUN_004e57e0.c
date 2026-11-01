
/* ==== FUN_004e57e0 @ 004e57e0 ==== 
 * signature: undefined __thiscall FUN_004e57e0(void * this, void * param_1)
 * body: 004e57e0-004e584a
 */

void __thiscall FUN_004e57e0(void *this,void *param_1)

{
  int iVar1;
  
  FUN_004d7430(param_1);
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != *(int *)((int)this + 0xc)) {
    do {
      FUN_004d73d0(param_1);
      if (*(char *)(iVar1 + 0xc) == '\0') {
        FUN_004d7430(param_1);
        FUN_004d7430(param_1);
      }
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)((int)this + 0xc));
  }
  return;
}


