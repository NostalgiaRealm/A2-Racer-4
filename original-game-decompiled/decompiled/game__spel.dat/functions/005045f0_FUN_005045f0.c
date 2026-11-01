
/* ==== FUN_005045f0 @ 005045f0 ==== 
 * signature: undefined __thiscall FUN_005045f0(void * this, undefined4 * param_1)
 * body: 005045f0-0050463d
 */

void __thiscall FUN_005045f0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 2;
  piVar4 = (int *)((int)this + 0x10);
  do {
    uVar1 = FUN_0053fc00((int)(piVar4 + -2));
    if (uVar1 == 0) {
      *param_1 = *(undefined4 *)(*piVar4 + 0x98);
    }
    else {
      uVar2 = (**(code **)**(undefined4 **)(*(int *)(*(int *)((int)this + 0x10) + 0x18) + 0xac))
                        (0,uVar1);
      *param_1 = uVar2;
    }
    piVar4 = piVar4 + 5;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


