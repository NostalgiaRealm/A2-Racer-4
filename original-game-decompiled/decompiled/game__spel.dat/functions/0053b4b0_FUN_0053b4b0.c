
/* ==== FUN_0053b4b0 @ 0053b4b0 ==== 
 * signature: undefined __fastcall FUN_0053b4b0(int * param_1)
 * body: 0053b4b0-0053b568
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053b4b0(int *param_1)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_0053bf10(param_1);
  uVar2 = param_1[5];
  if ((uVar2 & 0xc000) == 0) {
    fVar1 = (float)param_1[0x15];
    if ((uVar2 & 0xf) == 0) {
      if (fVar1 < *(float *)(&DAT_0074d528 + (uVar2 >> 0x16 & 0xff) * 4) + _DAT_0074d644) {
        (**(code **)(*param_1 + 0x18))();
        return;
      }
      FUN_0053ac00(param_1,0,2);
      return;
    }
    if (fVar1 < _DAT_0074d63c) {
      piVar3 = param_1 + 6;
      piVar4 = param_1 + 0xd;
      if (*(short *)((int)param_1 + 0x32) != 3) {
        piVar3 = param_1 + 0xd;
        piVar4 = param_1 + 6;
      }
      if (((*(short *)((int)piVar4 + 0x1a) == 2) && (*(short *)((int)piVar3 + 0x1a) == 3)) &&
         (*(int *)(*(int *)(piVar3[4] + 0xa4) + 0x10) != 0)) {
        FUN_0053b380(param_1,piVar3[4],(int)fVar1);
      }
    }
    FUN_0053ac00(param_1,0,1);
  }
  return;
}


