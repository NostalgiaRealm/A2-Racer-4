
/* ==== FUN_0053ba40 @ 0053ba40 ==== 
 * signature: undefined __thiscall FUN_0053ba40(void * this, int * param_1)
 * body: 0053ba40-0053baee
 */

void __thiscall FUN_0053ba40(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  FUN_0053bf10(param_1);
  uVar1 = param_1[5];
  if ((uVar1 & 0x3000) == 0) {
    if ((uVar1 & 0xc000) != 0) {
      (**(code **)(*param_1 + 0x14))(this);
      return;
    }
  }
  else {
    if ((uVar1 & 0xc000) == 0) {
      if (0.0 < (float)param_1[0x15]) {
        if ((uVar1 & 0xc00) == 0) {
          return;
        }
        FUN_0053b9a0((int)param_1);
        return;
      }
      param_1 = (int *)-(float)param_1[0x15];
    }
    else {
      param_1 = (int *)param_1[0x14];
    }
    if ((uVar1 & 0xc00) == 0) {
      FUN_0053b960((uint)piVar2);
    }
    iVar3 = *(int *)(piVar2[10] + 0x1c);
    if ((iVar3 != 0) || (iVar3 = *(int *)(piVar2[0x11] + 0x1c), iVar3 != 0)) {
      param_1 = (int *)((float)param_1 + *(float *)(iVar3 + 4));
    }
    FUN_0053b570(this,(int)piVar2);
    FUN_0053b8a0((int)piVar2,(float)param_1);
  }
  return;
}


