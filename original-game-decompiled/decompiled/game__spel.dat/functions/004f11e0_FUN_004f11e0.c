
/* ==== FUN_004f11e0 @ 004f11e0 ==== 
 * signature: float10 __thiscall FUN_004f11e0(int param_1, int param_2)
 * body: 004f11e0-004f1234
 */

float10 __thiscall FUN_004f11e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))();
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_004edd30(iVar4 + *(int *)(*(int *)(param_1 + 8) + 4));
      if (iVar2 == param_2) {
        return (float10)*(float *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x14 + iVar3 * 0x28);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar3 < iVar1);
  }
  return (float10)0.0;
}


