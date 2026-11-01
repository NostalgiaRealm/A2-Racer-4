
/* ==== FUN_00427400 @ 00427400 ==== 
 * signature: undefined __thiscall FUN_00427400(void * this, int param_1, int param_2, float param_3, char param_4)
 * body: 00427400-0042752c
 */

void __thiscall FUN_00427400(void *this,int param_1,int param_2,float param_3,char param_4)

{
  DWORD DVar1;
  void *this_00;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int iVar6;
  
  DVar1 = GetTickCount();
  if (DVar1 - *(int *)(param_2 * 0x10 + 0xde6b4 + (int)this) < 300) {
    fVar3 = FUN_004252c0((int)this + param_2 * 0x14 + 0x10);
    if (((float10)param_3 < fVar3 * (float10)0.33333334) && (param_4 != '\0')) {
      iVar6 = 0;
      this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,*(int *)((int)this + 0xdf648));
      FUN_0049e550(this_00,iVar6);
    }
  }
  iVar6 = (int)this + param_2 * 0x14 + 0x10;
  fVar3 = FUN_004252c0(iVar6);
  if ((float10)param_3 < fVar3) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_004273d0(param_1,*(int *)((int)this + uVar2 * 4 + 0xdf64c));
    return;
  }
  fVar3 = FUN_004252d0(iVar6);
  fVar4 = FUN_004252c0(iVar6);
  fVar5 = FUN_004252c0(iVar6);
  if ((float10)param_3 < fVar5 + (float10)(float)((fVar4 + (float10)(float)fVar3) * (float10)0.5)) {
    uVar2 = FUN_00558625();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    FUN_004273d0(param_1,*(int *)((int)this + uVar2 * 4 + 0xdf654));
    return;
  }
  uVar2 = FUN_00558625();
  uVar2 = uVar2 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  FUN_004273d0(param_1,*(int *)((int)this + uVar2 * 4 + 0xdf65c));
  return;
}


