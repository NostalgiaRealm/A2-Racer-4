
/* ==== FUN_004e0f50 @ 004e0f50 ==== 
 * signature: undefined __thiscall FUN_004e0f50(void * this, int param_1)
 * body: 004e0f50-004e0f98
 */

void __thiscall FUN_004e0f50(void *this,int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  pvVar1 = (LPVOID)FUN_004d9280(param_1);
  if (*(int *)((int)this + 0x20) == 3) {
    iVar2 = FUN_004e5a70((int)this + 0x34);
    if (-1 < iVar2 + -1) {
      puVar3 = (undefined4 *)((int)pvVar1 + (iVar2 + -1) * 4);
      do {
        FUN_00559d4e((LPVOID)*puVar3);
        puVar3 = puVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0054b339(pvVar1);
  return;
}


