
/* ==== FUN_004e14d0 @ 004e14d0 ==== 
 * signature: undefined4 * __fastcall FUN_004e14d0(undefined4 * param_1)
 * body: 004e14d0-004e156f
 */

undefined4 * __fastcall FUN_004e14d0(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int extraout_ECX;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_5;
  
  puVar5 = param_1 + 3;
  *(undefined1 *)puVar5 = local_5;
  FUN_004028f0(puVar5,'\0');
  uVar6 = 0xffffffff;
  pcVar9 = s__none_005b715c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar3 = FUN_00402a00(puVar5,uVar6,'\x01');
  iVar8 = extraout_ECX;
  if ((char)uVar3 != '\0') {
    pcVar9 = s__none_005b715c;
    pcVar10 = (char *)param_1[4];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    param_1[5] = uVar6;
    *(undefined1 *)(uVar6 + param_1[4]) = 0;
    iVar8 = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0x34;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xe] = 0;
  param_1[0xc] = &PTR_FUN_005778c0;
  *param_1 = &PTR_FUN_00577f68;
  pvVar2 = ExceptionList;
  ExceptionList = &stack0xffffffec;
  puVar4 = operator_new(0x50);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(iVar8 + 4);
    puVar4[2] = *(undefined4 *)(iVar8 + 8);
    puVar5 = puVar4 + 3;
    *(undefined1 *)puVar5 = *(undefined1 *)(iVar8 + 0xc);
    FUN_004028f0(puVar5,'\0');
    FUN_004093c0(puVar5,(undefined1 *)(iVar8 + 0xc),0,0xffffffff);
    puVar4[7] = *(undefined4 *)(iVar8 + 0x1c);
    puVar4[8] = *(undefined4 *)(iVar8 + 0x20);
    *(undefined2 *)(puVar4 + 9) = *(undefined2 *)(iVar8 + 0x24);
    *(undefined1 *)(puVar4 + 10) = 0;
    *(undefined1 *)((int)puVar4 + 0x29) = 0;
    *puVar4 = &PTR_FUN_00577d44;
    FUN_004cef20(puVar4 + 0xc,iVar8 + 0x30);
    puVar4[0xc] = &PTR_FUN_005778c0;
    *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(iVar8 + 0x48);
    *puVar4 = &PTR_FUN_00577f68;
    puVar5 = puVar4;
  }
  ExceptionList = pvVar2;
  return puVar5;
}


