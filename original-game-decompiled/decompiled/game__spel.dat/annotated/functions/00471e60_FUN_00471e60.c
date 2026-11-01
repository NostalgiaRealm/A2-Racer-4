
/* ==== FUN_00471e60 @ 00471e60 ==== 
 * signature: LPVOID __thiscall FUN_00471e60(void * this, byte param_1)
 * body: 00471e60-00471eb2
 */

LPVOID __thiscall FUN_00471e60(void *this,byte param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


