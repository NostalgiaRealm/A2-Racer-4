
/* ==== FUN_004237b0 @ 004237b0 ==== 
 * signature: bool __stdcall FUN_004237b0(void)
 * body: 004237b0-00423887
 */

bool FUN_004237b0(void)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float *pfVar11;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  puVar6 = (undefined4 *)PTR_s_CarHorn_005a7dc8;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569f38;
  local_c = ExceptionList;
  uVar4 = 0xffffffff;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar7 = PTR_s_CarHorn_005a7dc8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  ExceptionList = &local_c;
  uVar2 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    puVar8 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar4) = 0;
    local_14 = uVar4;
  }
  puVar10 = local_1c;
  pfVar11 = (float *)0x0;
  local_4 = 0;
  pvVar3 = (void *)FUN_004ea0c0();
  fVar9 = FUN_004eadd0(pvVar3,(int)puVar10,pfVar11);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return (float10)0.0 < fVar9;
}


