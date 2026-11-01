
/* ==== FUN_005013d0 @ 005013d0 ==== 
 * signature: uint __thiscall FUN_005013d0(void * this, undefined4 param_1, uint param_2)
 * body: 005013d0-00501431
 */

uint __thiscall FUN_005013d0(void *this,undefined4 param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 & *(uint *)((int)this + 4);
  puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar3 * 8);
  iVar2 = *(int *)(*(int *)((int)this + 0xc) + 4 + uVar3 * 8);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (((*puVar1 | 0x80000000) == param_2) &&
       (iVar2 = (*(code *)**(undefined4 **)this)(iVar2,param_1), iVar2 != 0)) break;
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 4);
    iVar2 = *(int *)(*(int *)((int)this + 0xc) + 4 + uVar3 * 8);
    puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar3 * 8);
  }
  return puVar1[1];
}


