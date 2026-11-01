
/* ==== FUN_0053fa90 @ 0053fa90 ==== 
 * signature: undefined __thiscall FUN_0053fa90(void * this, int param_1)
 * body: 0053fa90-0053fb16
 */

void __thiscall FUN_0053fa90(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(short *)((int)*(void **)((int)this + 4) + 0x3e) < 2) {
    FUN_0053fa30(this,param_1);
  }
  else {
    FUN_00549b30(*(void **)((int)this + 4),param_1);
  }
  piVar1 = *(int **)((int)this + 4);
  if (*(short *)((int)piVar1 + 0x3e) == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(1);
    }
    **(uint **)(param_1 + 0x14) = **(uint **)(param_1 + 0x14) & 0xfffffdff | 0x100;
    return;
  }
  if ((char)piVar1[0x11] != '\0') {
    piVar1[0x11] = piVar1[0x11] & 0xffffff00;
    iVar2 = FUN_0053ebe0(*(int *)((int)this + 4));
    if (iVar2 != 0) {
      FUN_0053ec90(*(void **)((int)this + 4),iVar2);
      **(uint **)(iVar2 + 0x1d4) = **(uint **)(iVar2 + 0x1d4) & 0xfffffdff | 0x100;
    }
  }
  return;
}


