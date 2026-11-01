
/* ==== FUN_00426460 @ 00426460 ==== 
 * signature: undefined __thiscall FUN_00426460(void * this, char param_1)
 * body: 00426460-004264a1
 */

void __thiscall FUN_00426460(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)((int)this + 0x10);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 0x12;
      iVar3 = iVar3 + 1;
      *(uint *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = (uint)(param_1 != '\0');
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return;
}


