
/* ==== FUN_004eac80 @ 004eac80 ==== 
 * signature: float10 __thiscall FUN_004eac80(int param_1, undefined4 * param_2, float * param_3)
 * body: 004eac80-004eadcd
 */

float10 __thiscall FUN_004eac80(int param_1,undefined4 *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  int local_28;
  int local_24;
  float fStack_20;
  float fStack_1c;
  undefined1 auStack_10 [16];
  
  iVar7 = 0;
  local_24 = 0;
  local_28 = 0;
  iVar3 = (**(code **)*param_2)();
  fStack_1c = 0.0;
  fStack_20 = 0.0;
  iVar4 = (*(code *)**(undefined4 **)(param_1 + 4))();
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(param_2[1] + 4) + iVar7 * 4);
      iVar2 = *piVar1;
      if ((iVar2 < 0) || (iVar4 <= iVar2)) {
        FUN_0049df90(auStack_10,(byte *)s_Illegal_device_index___d_Current_005b7980);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_10,&DAT_00587530);
      }
      iVar5 = FUN_004ec540((int)piVar1);
      uVar6 = FUN_004edd30(iVar5);
      fVar8 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar2 * 4) +
                                   0x10))(uVar6);
      fStack_1c = (float)(fVar8 + (float10)fStack_1c);
      if ((float10)0.0 < fVar8) {
        local_24 = local_24 + 1;
      }
      if (param_3 != (float *)0x0) {
        fVar8 = (float10)(**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar2 * 4) +
                                     0x14))(uVar6);
        fStack_20 = (float)(fVar8 + (float10)fStack_20);
        if ((float10)0.0 < fVar8) {
          local_28 = local_28 + 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  if (param_3 != (float *)0x0) {
    if (local_28 == iVar3) {
      *param_3 = fStack_20 / (float)local_28;
    }
    else {
      *param_3 = 0.0;
    }
  }
  if (local_24 != iVar3) {
    return (float10)0.0;
  }
  return (float10)fStack_1c / (float10)local_24;
}


