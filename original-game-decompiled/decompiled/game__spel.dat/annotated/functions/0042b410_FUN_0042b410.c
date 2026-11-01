
/* ==== FUN_0042b410 @ 0042b410 ==== 
 * signature: undefined __stdcall FUN_0042b410(int param_1, undefined4 * param_2, undefined * param_3)
 * body: 0042b410-0042b54a
 */

void FUN_0042b410(int param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  void *this;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 local_c [3];
  
  this = (void *)FUN_0042aee0();
  bVar4 = FUN_0042b180(this,(int)param_2);
  if (bVar4) {
    puVar5 = (undefined4 *)FUN_0042b0e0(this,local_c,(int)param_2);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar6 = FUN_0042b0a0(this,(int)param_2);
    pcVar11 = (code *)param_3;
    if (param_3 == (undefined *)0x0) {
      pcVar11 = FUN_0042aa20;
    }
    iVar7 = FUN_004a7790(uVar1,uVar2,uVar3,0,0,0,uVar6,0,pcVar11,0,0);
    iVar9 = iVar7 * 0xf0;
    *(undefined4 *)(iVar9 + 0x34 + DAT_00715e50) =
         *(undefined4 *)(param_1 * 0xf0 + 0x34 + DAT_00715e50);
    *(undefined4 *)(iVar9 + 0x68 + DAT_00715e50) = 1;
    iVar8 = *(int *)(param_1 * 0xf0 + 0x44 + DAT_00715e50);
    if (iVar8 != -1) {
      do {
        iVar10 = iVar8;
        iVar8 = *(int *)(iVar10 * 0xf0 + 0x44 + DAT_00715e50);
      } while (iVar8 != -1);
      if (iVar10 != param_1) {
        *(int *)(iVar10 * 0xf0 + 0x44 + DAT_00715e50) = iVar7;
      }
    }
    *(int *)(iVar9 + 0x48 + DAT_00715e50) = param_1;
    iVar9 = iVar9 + DAT_00715e50;
    iVar8 = FUN_0042b140(this,(int)param_2);
    *(float *)(iVar9 + 0x58) = (float)iVar8;
  }
  return;
}


