
/* ==== FUN_004e24e0 @ 004e24e0 ==== 
 * signature: undefined __thiscall FUN_004e24e0(void * this, undefined2 * param_1)
 * body: 004e24e0-004e2518
 */

void __thiscall FUN_004e24e0(void *this,undefined2 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = (int)param_1 - (int)this;
  *(undefined2 *)this = *param_1;
  iVar1 = 5;
  puVar2 = (undefined2 *)((int)this + 0x18);
  do {
    this = (void *)((int)this + 4);
    *(undefined4 *)this = *(undefined4 *)(iVar3 + (int)this);
    *puVar2 = *(undefined2 *)(iVar3 + -2 + (int)(puVar2 + 1));
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 0);
  return;
}


