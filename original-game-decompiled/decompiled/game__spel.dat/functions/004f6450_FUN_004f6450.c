
/* ==== FUN_004f6450 @ 004f6450 ==== 
 * signature: int __thiscall FUN_004f6450(void * this, int param_1)
 * body: 004f6450-004f64d6
 */

int __thiscall FUN_004f6450(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  do {
    if (param_1 == 0) {
      iVar2 = FUN_004f60d0(this);
      param_1 = *(int *)(iVar2 + 0x1c);
      iVar2 = param_1;
      if (param_1 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 8);
    }
    iVar1 = param_1;
    if (*(int *)(param_1 + 4) == 1) {
      while( true ) {
        param_1 = *(int *)(param_1 + 0x1c);
        iVar1 = 0;
        if (param_1 == 0) break;
        if (*(int *)(param_1 + 4) != 1) {
          return param_1;
        }
      }
    }
    for (; param_1 = iVar2, param_1 == 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        iVar2 = FUN_004f60d0(this);
        if (iVar2 == iVar1) {
          return 0;
        }
        iVar2 = *(int *)(iVar2 + 0x1c);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar1 = iVar2;
    }
    if (*(int *)(param_1 + 4) != 1) {
      return param_1;
    }
  } while (*(int *)((int)this + 0x14) != 0);
  return 0;
}


