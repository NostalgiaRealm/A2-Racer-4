
/* ==== FUN_004ad770 @ 004ad770 ==== 
 * signature: int __thiscall FUN_004ad770(void * this, undefined4 param_1)
 * body: 004ad770-004ad7c8
 */

int __thiscall FUN_004ad770(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    iVar2 = *(int *)((int)this + 0x14);
    iVar1 = *(int *)((int)this + 0x10);
    break;
  case 1:
    iVar2 = *(int *)((int)this + 0x1c);
    iVar1 = *(int *)((int)this + 0x18);
    goto LAB_004ad7a1;
  case 2:
    iVar2 = *(int *)((int)this + 0x2c);
    iVar1 = *(int *)((int)this + 0x28);
    break;
  case 3:
    iVar2 = *(int *)((int)this + 0x24);
    iVar1 = *(int *)((int)this + 0x20);
LAB_004ad7a1:
    return (iVar2 - iVar1) / 3;
  default:
    return 0;
  }
  return (iVar2 - iVar1) / 3;
}


