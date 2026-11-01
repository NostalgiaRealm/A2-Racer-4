
/* ==== FUN_00469d70 @ 00469d70 ==== 
 * signature: int __thiscall FUN_00469d70(void * this, int param_1)
 * body: 00469d70-00469db2
 */

int __thiscall FUN_00469d70(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar2 = 0;
    do {
      uVar1 = FUN_00469740((void *)(iVar2 + *(int *)this),param_1);
      if ((char)uVar1 != '\0') {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return -1;
}


