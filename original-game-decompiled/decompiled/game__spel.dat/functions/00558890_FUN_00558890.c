
/* ==== FUN_00558890 @ 00558890 ==== 
 * signature: undefined4 * __thiscall FUN_00558890(void * this, int param_1)
 * body: 00558890-005588d9
 */

undefined4 * __thiscall FUN_00558890(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  uint *puVar3;
  
  *(undefined ***)this = &PTR_FUN_005795d8;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_1 + 4));
    puVar3 = operator_new(sVar2 + 1);
    *(uint **)((int)this + 4) = puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_0055ee40(puVar3,*(uint **)(param_1 + 4));
    }
  }
  return this;
}


