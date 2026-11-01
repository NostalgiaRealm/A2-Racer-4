
/* ==== FUN_00416e46 @ 00416e46 ==== 
 * signature: undefined __fastcall FUN_00416e46(int param_1)
 * body: 00416e46-00416f1a
 */

void __fastcall FUN_00416e46(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  fVar6 = FUN_004a6800(0x7128b0);
  *(float *)(param_1 + 0x2c) = (float)(fVar6 + (float10)*(float *)(param_1 + 0x2c));
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14 +
                     *(int *)(param_1 + 0x28) * 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
  }
  iVar4 = 0;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x20))();
  if (iVar2 < 1) {
    return;
  }
  iVar2 = 0;
  while( true ) {
    if ((iVar2 < 0) || (iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))(), iVar3 <= iVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    FUN_004a6980(iVar3,(byte *)s__s__d____Invalid_state_transitio_005930a8);
    piVar5 = (int *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + iVar2);
    if ((*piVar5 == *(int *)(param_1 + 0x28)) &&
       (fVar6 = (float10)(*(code *)piVar5[2])(param_1), fVar6 == (float10)1.0)) break;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0xc;
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 0x20))();
    if (iVar3 <= iVar4) {
      return;
    }
  }
  *(int *)(param_1 + 0x28) = piVar5[1];
  return;
}


