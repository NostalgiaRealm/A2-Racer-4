
/* ==== FUN_00499e40 @ 00499e40 ==== 
 * signature: undefined __fastcall FUN_00499e40(undefined4 * param_1)
 * body: 00499e40-00499f46
 */

void __fastcall FUN_00499e40(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  int local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e611;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00577140;
  local_4 = 0;
  local_10 = 0;
  iVar3 = FUN_0049bf00(param_1[0xf]);
  if (0 < iVar3) {
    do {
      this = (void *)FUN_0049bd10((void *)param_1[0xf],local_10);
      if (this != (void *)0x0) {
        iVar3 = FUN_004990c0((int)this);
        uVar4 = 0xffffffff;
        pcVar8 = &DAT_00712814;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar2 = *(uint *)(iVar3 + 8);
        uVar5 = ~uVar4 - 1;
        uVar4 = uVar2;
        if (uVar5 <= uVar2) {
          uVar4 = uVar5;
        }
        bVar10 = false;
        iVar6 = 0;
        bVar11 = true;
        pbVar7 = *(byte **)(iVar3 + 4);
        pbVar9 = &DAT_00712814;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar10 = *pbVar7 < *pbVar9;
          bVar11 = *pbVar7 == *pbVar9;
          pbVar7 = pbVar7 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
        if (((iVar6 == 0) && (uVar5 <= uVar2)) && (uVar2 == uVar5)) {
          FUN_0049bda0((void *)param_1[0xf],(int)this);
        }
        else {
          FUN_00499380(this,0);
        }
      }
      local_10 = local_10 + 1;
      iVar3 = FUN_0049bf00(param_1[0xf]);
    } while (local_10 < iVar3);
  }
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  param_1[0xf] = 0;
  local_4 = 0xffffffff;
  FUN_00498c10(param_1);
  ExceptionList = pvStack_c;
  return;
}


