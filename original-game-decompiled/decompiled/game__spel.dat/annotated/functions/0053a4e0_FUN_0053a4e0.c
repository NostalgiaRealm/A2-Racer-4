
/* ==== FUN_0053a4e0 @ 0053a4e0 ==== 
 * signature: undefined __thiscall FUN_0053a4e0(void * this, void * param_1)
 * body: 0053a4e0-0053a57e
 */

void __thiscall FUN_0053a4e0(void *this,void *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = param_1;
  FUN_0053bdb0((int)param_1);
  uVar1 = *(uint *)((int)param_1 + 0x14);
  if ((uVar1 & 0xc000) == 0) {
    if (0.0 < *(float *)((int)param_1 + 0x54)) {
      if ((uVar1 & 0xc00) != 0) {
        FUN_0053b9a0((int)param_1);
      }
      FUN_0053a2f0(this,(int)param_1);
      FUN_0053ac00(param_1,1,2);
      return;
    }
    param_1 = (void *)-*(float *)((int)param_1 + 0x54);
  }
  else {
    param_1 = *(void **)((int)param_1 + 0x50);
  }
  if ((uVar1 & 0xc00) == 0) {
    FUN_0053b960((uint)pvVar2);
  }
  iVar3 = *(int *)(*(int *)((int)pvVar2 + 0x28) + 0x1c);
  if ((iVar3 != 0) || (iVar3 = *(int *)(*(int *)((int)pvVar2 + 0x44) + 0x1c), iVar3 != 0)) {
    param_1 = (void *)((float)param_1 + *(float *)(iVar3 + 4));
  }
  FUN_0053b8a0((int)pvVar2,(float)param_1);
  return;
}


