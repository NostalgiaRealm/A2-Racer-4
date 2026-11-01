
/* ==== FUN_00553734 @ 00553734 ==== 
 * signature: undefined __thiscall FUN_00553734(void * this, char param_1)
 * body: 00553734-00553770
 */

void __thiscall FUN_00553734(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != '\0') && (iVar2 = *(int *)((int)this + 4), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(iVar2 + -2));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


